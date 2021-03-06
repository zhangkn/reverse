//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBXRenderProtocol-Protocol.h"
#import "WBXWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WBXApplication, WBXPage, WBXThreadSafeMutableArray, WBXWebView;

@interface WBXWebPageRender : NSObject <WKUIDelegate, WKNavigationDelegate, WBXWebViewDelegate, WBXRenderProtocol>
{
    NSString *pageID;
    WBXThreadSafeMutableArray *_sendQueue;
    WBXApplication *_app;
    WBXWebView *_rootView;
    NSString *_appID;
    NSMutableDictionary *_blockStack;
    WBXPage *_page;
}

@property(nonatomic) __weak WBXPage *page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableDictionary *blockStack; // @synthesize blockStack=_blockStack;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) __weak WBXWebView *rootView; // @synthesize rootView=_rootView;
@property(nonatomic) __weak WBXApplication *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (id)preloadWithRootView:(id)arg1;
- (id)injectWebBridgeWithView:(id)arg1;
- (void)flushJsQueue;
- (id)generateJSCommendFrom:(id)arg1;
- (void)evaluateJavaScript:(id)arg1 method:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)registerCallNative:(CDUnknownBlockType)arg1;
- (id)callBridgeBlockWithName:(id)arg1 arguments:(id)arg2;
- (void)registerGlobalFunctions;
- (id)callJSMethod:(id)arg1 args:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)prepareForRender;
- (void)injectSafeAreaCss;
- (void)executeJsMethod:(id)arg1;
- (void)wbxwebviewTerminaled:(id)arg1;
- (void)reloadWebView;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)domCommands:(id)arg1 args:(id)arg2;
- (void)callDomModuleWithMethod:(id)arg1 Args:(id)arg2 Complete:(CDUnknownBlockType)arg3;
- (void)updateConfig;
- (void)updatePage:(id)arg1;
- (_Bool)checkTerminaled;
- (id)initWithPage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBLiveRoomProtocol-Protocol.h"
#import "WBStoryLiveViewProtocel-Protocol.h"
#import "WBTBLiveRoomDataCacheProtocol-Protocol.h"

@class NSDictionary, NSString, UIView, WBLiveRootView, WBStoryLiveView, WBTBLiveRoomDataCachePool, WBUser, WBViewController, YXLiveLoginUser, YXLiveModel;
@protocol WBLiveCallbackProtocol;

@interface WBTBLiveRoomBaseController : NSObject <WBStoryLiveViewProtocel, WBTBLiveRoomDataCacheProtocol, WBLiveRoomProtocol>
{
    NSString *coverUrl;
    _Bool _isHorizontalScreen;
    _Bool _isRSARegistered;
    _Bool _isLogined;
    _Bool _isFromStory;
    _Bool _outForLiveSquare;
    _Bool _isShowFirstFrame;
    UIView *liveView;
    id <WBLiveCallbackProtocol> _callBackDelegate;
    WBViewController *_viewController;
    WBLiveRootView *_view;
    NSString *_schemeLink;
    NSDictionary *_schemeParaDict;
    YXLiveModel *_liveModel;
    YXLiveLoginUser *_loginUser;
    WBUser *_performerWBUser;
    NSString *_scid;
    NSString *_liveFrom;
    NSString *_liveType;
    NSString *_url;
    long long _currentOrientation;
    WBStoryLiveView *_storyLiveView;
    unsigned long long _vcType;
    unsigned long long _status;
    unsigned long long _liveContentType;
    WBTBLiveRoomDataCachePool *_cachePool;
}

@property(retain, nonatomic) WBTBLiveRoomDataCachePool *cachePool; // @synthesize cachePool=_cachePool;
@property(nonatomic) _Bool isShowFirstFrame; // @synthesize isShowFirstFrame=_isShowFirstFrame;
@property(nonatomic) _Bool outForLiveSquare; // @synthesize outForLiveSquare=_outForLiveSquare;
@property(nonatomic) unsigned long long liveContentType; // @synthesize liveContentType=_liveContentType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long vcType; // @synthesize vcType=_vcType;
@property(nonatomic) __weak WBStoryLiveView *storyLiveView; // @synthesize storyLiveView=_storyLiveView;
@property(nonatomic) _Bool isFromStory; // @synthesize isFromStory=_isFromStory;
@property(nonatomic) _Bool isLogined; // @synthesize isLogined=_isLogined;
@property(nonatomic) _Bool isRSARegistered; // @synthesize isRSARegistered=_isRSARegistered;
@property(nonatomic) _Bool isHorizontalScreen; // @synthesize isHorizontalScreen=_isHorizontalScreen;
@property(readonly, nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *liveType; // @synthesize liveType=_liveType;
@property(copy, nonatomic) NSString *liveFrom; // @synthesize liveFrom=_liveFrom;
@property(retain, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(retain, nonatomic) WBUser *performerWBUser; // @synthesize performerWBUser=_performerWBUser;
@property(retain, nonatomic) YXLiveLoginUser *loginUser; // @synthesize loginUser=_loginUser;
@property(retain, nonatomic) YXLiveModel *liveModel; // @synthesize liveModel=_liveModel;
@property(copy, nonatomic) NSDictionary *schemeParaDict; // @synthesize schemeParaDict=_schemeParaDict;
@property(copy, nonatomic) NSString *schemeLink; // @synthesize schemeLink=_schemeLink;
@property(retain, nonatomic) WBLiveRootView *view; // @synthesize view=_view;
@property(nonatomic) __weak WBViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <WBLiveCallbackProtocol> callBackDelegate; // @synthesize callBackDelegate=_callBackDelegate;
@property(retain, nonatomic) UIView *liveView; // @synthesize liveView;
- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)liveRoomDidReceiveMemoryWarning;
- (void)liveRoomClose;
- (void)liveRoomClear;
- (void)liveRoomStop;
- (void)liveRoomPlay;
- (void)liveRoomUpdateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2 contentView:(id)arg3;
- (void)checkScheme:(id)arg1;
- (void)liveRoomUpdateWithModel:(id)arg1 inAppParas:(id)arg2 contentView:(id)arg3;
- (void)liveRoomInit;
- (id)obtainRoomInitialData;
- (void)cacheRoomInitialData:(id)arg1;
- (id)obtainLiveInfo;
- (void)cacheLiveInfo:(id)arg1;
- (void)pushToProfileWithUserId:(id)arg1;
- (void)vvsLeftSwipped;
- (id)getCoverImage;
- (id)getCurrentLiveImage;
- (int)coverLiveStatusToStoryStatus;
- (_Bool)storyFullScreenShouldPanDownClose;
- (_Bool)storyFullScreenShouldClose;
- (_Bool)storyFullScreenShouldScroll;
- (void)storyFullScreenDidSwipeUp;
- (_Bool)storyFullScreenShouldScroll:(int)arg1;
- (void)storyRelease;
- (void)storyCloseLive;
- (void)storyStop;
- (void)storyPlay;
- (id)getPlayUrlFromStoryParam:(id)arg1;
- (_Bool)abtestStoryFistFrameOptimize;
- (void)storyUpdate:(id)arg1 withParam:(id)arg2 storyLive:(id)arg3;
- (void)storyClear;
- (void)storyInit;
- (void)deviceOrientationChanged:(id)arg1;
- (void)liveContainerShouldRequestSlidingListCallback;
- (void)liveContainerDidResetModelCallback;
- (void)didReceiveRSA_ExchangeNotification:(id)arg1;
@property(readonly, copy, nonatomic) NSString *getContainerID;
- (_Bool)isVaildStatus;
- (void)closeButtonClickAction;
- (unsigned long long)formatVCType;
- (void)_getLiveModeleFromLiveList;
- (_Bool)_checkNetworkReachability;
- (void)_exchangeRSAPublickKey;
@property(readonly, nonatomic) _Bool isScreenLandscape;
- (void)liveRoomDidUpdateWBUser:(id)arg1 openId:(id)arg2;
- (void)liveRoomDidRequestWBUser:(id)arg1;
- (void)openSchemeWithURL:(id)arg1;
- (void)showTips:(id)arg1 duration:(double)arg2;
- (void)no_safe_showToastType:(unsigned long long)arg1 text:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showToastType:(unsigned long long)arg1 text:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showWhenFailed:(id)arg1;
- (void)liveRoomDidLoginFailure:(id)arg1;
- (void)liveRoomDidLoginSuccess;
- (void)liveRoomDidReceiveTaobaoLiveInfo;
- (void)liveRoomDidReceiveRSAExchangeSuccess;
- (void)liveRoomDidLeaveRoom;
- (void)liveRoomWillLeaveRoom;
- (void)liveRoomWillUpdateLiveInfo;
- (void)liveRoomDidUpdateLiveInfoFailure:(id)arg1;
- (void)liveRoomDidUpdateAnchorLevelInfoSuccess:(id)arg1;
- (void)liveRoomDidUpdateLiveInfoSuccess:(id)arg1;
- (_Bool)liveRoomShouldOperateStream;
- (void)liveRoomShouldCreateLiveStreamKit;
- (void)liveRoomConfigUIWhenRequestRoomInfoSuccess;
- (void)liveRoomQuickRequestRoomInfoSuccess;
- (void)liveRoomConfigUIWhenDidAppear;
- (void)liveRoomConfigUIWhenDidLoad;
- (id)uiCode;
- (void)liveRoomDidInitAnalyze;
- (void)didReceiveMemoryWarning;
- (void)liveRoomDidClose;
- (void)liveRoomDidEnd;
- (void)liveRoomDidLayoutSubviews;
- (void)liveRoomDidDisappear;
- (void)liveRoomWillDisappear;
- (void)liveRoomDidAppear;
- (void)liveRoomWillAppear;
- (void)liveRoomOrientationWillChange;
- (void)liveRoomOrientationChanging;
- (void)liveRoomOrientationDidChange;
- (void)liveRoomUnregisterObservers;
- (void)liveRoomTaobaoLoginStatusChange:(id)arg1;
- (void)liveRoomWillEnterForeground;
- (void)liveRoomDidEnterBackground;
- (void)liveRoomRegisterObservers;
- (void)liveRoomDidLoad;
- (void)liveRoomDidInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


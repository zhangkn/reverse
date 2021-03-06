//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStatusTextContentView.h"

#import "WBCoreTextViewDelegate-Protocol.h"
#import "WBTimelineAttributedTextViewDelegate-Protocol.h"

@class NSString, WBEditableAttributedTextView;

@interface WBDetailStatusTextContentView : WBStatusTextContentView <WBTimelineAttributedTextViewDelegate, WBCoreTextViewDelegate>
{
    WBEditableAttributedTextView *_itemTextView;
    WBEditableAttributedTextView *_quotedItemTextView;
    WBEditableAttributedTextView *_titleTextView;
}

@property(retain, nonatomic) WBEditableAttributedTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) WBEditableAttributedTextView *quotedItemTextView; // @synthesize quotedItemTextView=_quotedItemTextView;
@property(retain, nonatomic) WBEditableAttributedTextView *itemTextView; // @synthesize itemTextView=_itemTextView;
- (void).cxx_destruct;
- (struct CGRect)pressedItemAttachmentPointIsQuoted:(_Bool)arg1 Rect:(struct CGRect)arg2;
- (void)attributedTextView:(id)arg1 didPressMiniCard:(id)arg2;
- (void)attributedTextView:(id)arg1 didPressActiveRange:(id)arg2;
- (_Bool)shouldReloadAccessibilityElementsWhenSettingDrawingContext;
- (void)longTouchAtPoint:(struct CGPoint)arg1;
- (_Bool)resignFirstResponder;
- (void)setNeedsDisplay;
- (void)setDrawingContext:(id)arg1;
- (_Bool)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 asynchronously:(_Bool)arg3 userInfo:(id)arg4;
- (_Bool)alwaysUsesOffscreenRendering;
- (long long)drawingPolicy;
- (id)currentDrawingUserInfo;
- (_Bool)coreTextViewDidClickCopyItem:(id)arg1;
- (void)coreTextViewDidChangeSelection:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)reloadAccessibilityElements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


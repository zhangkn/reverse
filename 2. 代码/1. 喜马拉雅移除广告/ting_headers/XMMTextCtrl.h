//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseVC.h"

#import "CDZTextViewDelegate-Protocol.h"

@class CDZTextView, NSString, UILabel;

@interface XMMTextCtrl : XMChatBaseVC <CDZTextViewDelegate>
{
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _cancelBlock;
    unsigned long long _minimumTextLength;
    CDZTextView *_textView;
    UILabel *_countLabel;
}

@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) CDZTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) unsigned long long minimumTextLength; // @synthesize minimumTextLength=_minimumTextLength;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maximumTextLength;
- (void)layoutTextViewAndCountLabel;
- (void)updateCountLabel;
- (void)updateRightButton;
- (void)textViewDidHitMaximumTextLength:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardWillChangeFrameNotification:(id)arg1;
- (void)clickRightButton:(id)arg1;
- (void)back;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UIVisualEffectView;

@interface XMNowPlayingFastForwardView : UIView
{
    UILabel *_timeLabel;
    UIVisualEffectView *_effectview;
    UILabel *_rateLB;
    UILabel *_playOrderLB;
    UILabel *_tagLB;
    _Bool _fastForwardAnimating;
    CDUnknownBlockType _onTapBlock;
    UIButton *_forwardBtn;
    UIButton *_backBtn;
    UIButton *_rateBtn;
    UIButton *_playOrderBtn;
    UIButton *_tagBtn;
    UIImageView *_plantNewTagIv;
}

@property(retain, nonatomic) UIImageView *plantNewTagIv; // @synthesize plantNewTagIv=_plantNewTagIv;
@property(retain, nonatomic) UIButton *tagBtn; // @synthesize tagBtn=_tagBtn;
@property(retain, nonatomic) UIButton *playOrderBtn; // @synthesize playOrderBtn=_playOrderBtn;
@property(retain, nonatomic) UIButton *rateBtn; // @synthesize rateBtn=_rateBtn;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(nonatomic) _Bool fastForwardAnimating; // @synthesize fastForwardAnimating=_fastForwardAnimating;
@property(copy, nonatomic) CDUnknownBlockType onTapBlock; // @synthesize onTapBlock=_onTapBlock;
- (void).cxx_destruct;
- (void)onTap;
- (void)updateDanmuStatus:(_Bool)arg1;
- (void)playOrederBtnUpdateStatusWithPlayMode:(long long)arg1;
- (void)updatePlayerMode;
- (void)updatePlayOrder;
- (void)updateSpeedText;
- (void)updatePlantNewTag;
- (id)stringForSeconds:(unsigned long long)arg1;
- (void)showCurrentTime:(double)arg1 totoalSeconds:(double)arg2;
- (void)layoutSubviews;
- (void)layoutBottomBtn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onNPProSetBtn:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)customInit;
- (id)init;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel, XMGradientView, XMLiveRoomMsgAnchorRankInfo;
@protocol XMLiveTopBillboardsViewDelegate;

@interface XMLiveTopBillboardsView : UIView
{
    long long _indexOfBoard;
    NSString *_currentBoardType;
    id <XMLiveTopBillboardsViewDelegate> _delegate;
    XMLiveRoomMsgAnchorRankInfo *_anchorRank;
    NSArray *_billboards;
    UIView *_snapShort;
    UILabel *_billboardLabel;
    XMGradientView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *billboardLabel; // @synthesize billboardLabel=_billboardLabel;
@property(retain, nonatomic) UIView *snapShort; // @synthesize snapShort=_snapShort;
@property(retain, nonatomic) NSArray *billboards; // @synthesize billboards=_billboards;
@property(retain, nonatomic) XMLiveRoomMsgAnchorRankInfo *anchorRank; // @synthesize anchorRank=_anchorRank;
@property(nonatomic) __weak id <XMLiveTopBillboardsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleAnchorRankTap;
- (id)attrStrForBillboard:(id)arg1;
- (id)attrStrForRank;
- (void)reset;
- (void)stopAnimation;
- (void)startAnimation;
- (void)onAnimationCallback;
- (void)layoutSubviewConstrants;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


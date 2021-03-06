//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, XMMomentTopic, YYLabel;

@interface XMMTopicFollowCell : UITableViewCell
{
    XMMomentTopic *_topic;
    UIImageView *_coverImageView;
    YYLabel *_titleLabel;
    YYLabel *_statusLabel;
    UIButton *_followButton;
    CDUnknownBlockType _followAction;
}

@property(copy, nonatomic) CDUnknownBlockType followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) YYLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) YYLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) XMMomentTopic *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFollowStatus;
- (void)followButtonPressed;
- (void)configWithMomentTopic:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


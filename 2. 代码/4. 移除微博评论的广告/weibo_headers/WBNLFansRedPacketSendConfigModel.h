//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSString;

@interface WBNLFansRedPacketSendConfigModel : WBNLBaseModel
{
    NSString *_icon_url;
    long long _lower_amount;
    long long _send_start_time;
}

@property(nonatomic) long long send_start_time; // @synthesize send_start_time=_send_start_time;
@property(nonatomic) long long lower_amount; // @synthesize lower_amount=_lower_amount;
@property(retain, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
- (void).cxx_destruct;

@end


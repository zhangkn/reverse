//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SNHTTPRequestOperationWrapper;

@interface WBShortVideoDetailLoadWrapper : NSObject
{
    NSString *_identifier;
    SNHTTPRequestOperationWrapper *_wrapper;
    NSMutableArray *_completionBlocks;
}

+ (id)wrapperWithIdentifier:(id)arg1;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain, nonatomic) SNHTTPRequestOperationWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)init;

@end


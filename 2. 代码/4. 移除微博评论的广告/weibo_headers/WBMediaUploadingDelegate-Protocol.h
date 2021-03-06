//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WBMediaUploadResult;
@protocol WBMediaUploadStartInfo, WBMediaUploading;

@protocol WBMediaUploadingDelegate <NSObject>
- (void)mediaUploader:(id <WBMediaUploading>)arg1 didFailWithError:(NSError *)arg2;
- (void)mediaUploader:(id <WBMediaUploading>)arg1 didFinishWithResult:(WBMediaUploadResult *)arg2;
- (void)mediaUploader:(id <WBMediaUploading>)arg1 didCreateServerSessionWithInfo:(id <WBMediaUploadStartInfo>)arg2;
- (void)mediaUploaderDidCancel:(id <WBMediaUploading>)arg1;
- (void)mediaUploaderDidStart:(id <WBMediaUploading>)arg1;
@end


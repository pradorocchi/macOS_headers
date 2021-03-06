//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ReceiptManager : NSObject
{
    BOOL _isCancelled;
    double _progressDelta;
}

+ (id)receiptManager;
@property double progressDelta; // @synthesize progressDelta=_progressDelta;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
- (id)URLsForFilesMatchingPredicates:(id)arg1 inBOMAtURL:(id)arg2 baseURLs:(id)arg3 error:(id *)arg4;
- (id)URLsForFilesMatchingPredicates:(id)arg1 inPackage:(id)arg2 error:(id *)arg3;
- (void)snowLeopardReceiptsMatchingPredicates:(id)arg1 atURL:(id)arg2 installationBaseURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tigerReceiptsMatchingPredicates:(id)arg1 atURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)displayNameForReceiptAtURL:(id)arg1;
- (void)cancelLoading;
- (void)standaloneReceiptsMatchingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)standaloneReceiptsMatchingPredicates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)receiptsMatchingSearchCriteria:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)receiptsContainingPartialFilename:(id)arg1 caseSensitive:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)receiptsContainingPartialFilenames:(id)arg1 caseSensitive:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)receiptsContainingFileAtURL:(id)arg1 caseSensitive:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)receiptsContainingURLs:(id)arg1 caseSensitive:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


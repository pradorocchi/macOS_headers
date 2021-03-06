//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, NSOperation, VSAccountChannels, VSAccountChannelsCenter, VSAccountStore, VSOptional;

@interface VSAccountSaveOperation : VSAsyncOperation
{
    VSOptional *_result;
    NSArray *_unsavedAccounts;
    VSAccountStore *_accountStore;
    VSAccountChannelsCenter *_accountChannelsCenter;
    VSAccountChannels *_unsavedChannels;
    NSOperation *_currentOperation;
}

@property(retain, nonatomic) NSOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain, nonatomic) VSAccountChannels *unsavedChannels; // @synthesize unsavedChannels=_unsavedChannels;
@property(retain, nonatomic) VSAccountChannelsCenter *accountChannelsCenter; // @synthesize accountChannelsCenter=_accountChannelsCenter;
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(copy, nonatomic) NSArray *unsavedAccounts; // @synthesize unsavedAccounts=_unsavedAccounts;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)_startAccountChannelsSaveOperation;
- (void)_startCredentialSaveOperation;
- (id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2 channels:(id)arg3 accountChannelsCenter:(id)arg4;
- (id)init;

@end


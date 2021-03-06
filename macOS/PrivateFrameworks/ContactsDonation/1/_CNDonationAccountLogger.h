//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationAccountLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNDonationAccountLogger : NSObject <CNDonationAccountLogger>
{
    NSObject<OS_os_log> *_log_t;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
- (void).cxx_destruct;
- (void)removalFailedWithError:(id)arg1;
- (void)donationFailedWithError:(id)arg1;
- (void)removing:(id)arg1;
- (void)donating:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)accountAdded:(id)arg1;
- (void)pluginUnloaded;
- (void)pluginLoaded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface OTPGenerator : NSObject
{
    NSString *algorithm_;
    NSData *secret_;
    unsigned long long digits_;
}

+ (unsigned long long)defaultDigits;
+ (id)defaultAlgorithm;
@property(readonly, nonatomic) unsigned long long digits; // @synthesize digits=digits_;
@property(copy, nonatomic) NSData *secret; // @synthesize secret=secret_;
@property(copy, nonatomic) NSString *algorithm; // @synthesize algorithm=algorithm_;
- (id)generateOTPForCounter:(unsigned long long)arg1;
- (id)generateOTP;
- (void)dealloc;
- (id)initWithSecret:(id)arg1 algorithm:(id)arg2 digits:(unsigned long long)arg3;
- (id)init;

@end


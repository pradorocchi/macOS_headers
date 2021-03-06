//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LocalAuthenticationUI/NSObject-Protocol.h>

@class NSString;

@protocol LAUIUserPasswordFieldServiceProtocol <NSObject>
- (void)setSkipPasswordVerification:(BOOL)arg1;
- (void)setPINAuthentication:(BOOL)arg1;
- (void)setCanAuthenticateAsAnyAdmin:(BOOL)arg1;
- (void)setExtractablePassword:(BOOL)arg1;
- (void)clearPasswordField;
- (void)setUsername:(NSString *)arg1;
- (void)focusPasswordField;
- (void)submitPassword;
@end


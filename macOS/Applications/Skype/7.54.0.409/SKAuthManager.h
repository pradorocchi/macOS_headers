//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSLock, NSMutableDictionary, NSString;

@interface SKAuthManager : NSObject
{
    BOOL _allowRequests;
    NSDate *_webSessionExpirationDate;
    NSString *_sessionID;
    NSString *_sessionToken;
    NSMutableDictionary *_pendingAuthTokenRequests;
    NSLock *_pendingAuthTokenRequestsLock;
    NSMutableDictionary *_timers;
    NSLock *_timersLock;
}

+ (id)sharedManager;
+ (id)_errorFromAuthResult:(int)arg1;
@property(retain) NSLock *timersLock; // @synthesize timersLock=_timersLock;
@property(retain, nonatomic) NSMutableDictionary *timers; // @synthesize timers=_timers;
@property(retain) NSLock *pendingAuthTokenRequestsLock; // @synthesize pendingAuthTokenRequestsLock=_pendingAuthTokenRequestsLock;
@property(retain, nonatomic) NSMutableDictionary *pendingAuthTokenRequests; // @synthesize pendingAuthTokenRequests=_pendingAuthTokenRequests;
@property(nonatomic) BOOL allowRequests; // @synthesize allowRequests=_allowRequests;
@property(copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSDate *webSessionExpirationDate; // @synthesize webSessionExpirationDate=_webSessionExpirationDate;
- (void).cxx_destruct;
- (BOOL)putAccessTokensWithPartnerID:(unsigned long long)arg1 scopes:(id)arg2 accessToken:(id)arg3;
- (void)onAuthTokenRequest:(id)arg1;
- (void)onAuthTokenResultWithTimeout:(id)arg1;
- (void)cancelAuthRequestsWithTarget:(id)arg1;
- (void)cancelAuthRequestWithID:(id)arg1;
- (void)requestTimedOut:(id)arg1;
- (void)startTimerWithRequestNumber:(id)arg1 timeout:(double)arg2;
- (id)storeAuthRequestWithID:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3 type:(id)arg4 scope:(id)arg5 partnerID:(unsigned long long)arg6 userInfo:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)storeAuthRequestWithID:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3 type:(id)arg4 scope:(id)arg5 partnerID:(unsigned long long)arg6 userInfo:(id)arg7;
- (id)storeAuthRequestWithID:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3 type:(id)arg4 userInfo:(id)arg5;
- (void)requestAccessTokenWithPartnerID:(unsigned long long)arg1 scope:(id)arg2 bypassCache:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)requestAccessTokenWithPartnerID:(unsigned long long)arg1 scope:(id)arg2 bypassCache:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (void)requestSkypeTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)requestSkypeTokenWithTarget:(id)arg1 selector:(SEL)arg2 userInfo:(id)arg3;
- (void)requestSSOTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)requestSSOTokenWithTarget:(id)arg1 selector:(SEL)arg2 userInfo:(id)arg3 timeout:(double)arg4;
- (id)requestSSOTokenWithTarget:(id)arg1 selector:(SEL)arg2 userInfo:(id)arg3;
- (id)requestWebSessionWithTarget:(id)arg1 selector:(SEL)arg2 userInfo:(id)arg3;
- (void)skyLibWillStop:(id)arg1;
- (void)renewWebSessionToken;
- (void)deleteSessionCookies;
- (void)saveSessionCookie:(id)arg1 token:(id)arg2;
- (void)setCookieWithDictionary:(id)arg1;
- (id)sessionTokenDictionaryWithValue:(id)arg1;
- (id)sessionCookieDictionaryWithValue:(id)arg1;
- (void)clearRequests;
- (void)removeCachedTokens;
- (void)clearWebSession;
- (void)dealloc;
- (id)init;
- (void)onPartnerLinkInfoResult:(id)arg1;
- (BOOL)getSkypeLinkInfoWithPartnerID:(unsigned long long)arg1 accessToken:(id)arg2;
- (void)onAccountPartnerLinkResult:(id)arg1;
- (BOOL)linkAccountWithPartnerID:(unsigned long long)arg1 accessToken:(id)arg2 skypeName:(id)arg3 password:(id)arg4;

@end


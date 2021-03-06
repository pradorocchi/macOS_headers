//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DDMRequest : NSObject
{
    unsigned int _requestType;
    NSString *_ddmID;
    NSString *_language;
    NSString *_product;
    NSString *_platform;
    NSString *_version;
}

+ (id)topicRequestWithID:(id)arg1 language:(id)arg2 product:(id)arg3 platform:(id)arg4 version:(id)arg5;
+ (id)bookRequestWithID:(id)arg1 language:(id)arg2 product:(id)arg3 platform:(id)arg4 version:(id)arg5;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *platform; // @synthesize platform=_platform;
@property(readonly) NSString *product; // @synthesize product=_product;
@property(readonly) NSString *language; // @synthesize language=_language;
@property(readonly) NSString *ddmID; // @synthesize ddmID=_ddmID;
@property(readonly) unsigned int requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)ddmObjectFromResponseDictionary:(id)arg1 originURL:(id)arg2;
@property(readonly) NSURL *ddmURL;
- (id)_ddmURLWithURLComponents:(id)arg1;
- (id)_ddmURLWithQuery:(id)arg1;
- (id)initWithType:(unsigned int)arg1 ddmID:(id)arg2 language:(id)arg3 product:(id)arg4 platform:(id)arg5 version:(id)arg6;

@end


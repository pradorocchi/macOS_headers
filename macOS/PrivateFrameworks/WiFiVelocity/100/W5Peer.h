//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiVelocity/NSCopying-Protocol.h>
#import <WiFiVelocity/NSSecureCoding-Protocol.h>

@class NSString;

@interface W5Peer : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isNearby;
    NSString *_peerID;
    long long _type;
    NSString *_name;
    NSString *_model;
    NSString *_build;
    NSString *_os;
    NSString *_version;
    double _lastDiscovered;
    double _lastLost;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double lastLost; // @synthesize lastLost=_lastLost;
@property(nonatomic) double lastDiscovered; // @synthesize lastDiscovered=_lastDiscovered;
@property(nonatomic) BOOL isNearby; // @synthesize isNearby=_isNearby;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *build; // @synthesize build=_build;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPeer:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (void)dealloc;

@end


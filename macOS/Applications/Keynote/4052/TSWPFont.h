//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSWPFont : NSObject
{
    NSString *_fontName;
    NSString *_compatibilityName;
    NSString *_displayName;
    NSString *_familyName;
    unsigned long long _hash;
}

+ (BOOL)isKeyValueProxyLeafType;
+ (id)fontForStyles:(id *)arg1 count:(unsigned long long)arg2;
+ (id)fontWithName:(id)arg1 compatibilityName:(id)arg2;
+ (id)fontWithName:(id)arg1;
@property(copy, nonatomic) NSString *compatibilityName; // @synthesize compatibilityName=_compatibilityName;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(readonly, nonatomic) NSString *familyName;
@property(readonly, nonatomic) NSString *displayName;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFontName:(id)arg1 compatibilityName:(id)arg2;
- (id)initWithFontName:(id)arg1;

@end


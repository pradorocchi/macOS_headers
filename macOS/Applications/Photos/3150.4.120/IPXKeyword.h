//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, RDKeyword;

@interface IPXKeyword : NSObject <NSCoding>
{
    RDKeyword *_rkKeyword;
    RDKeyword *_parent;
    NSString *_keyword;
    NSString *_shortcutKey;
    unsigned long long _key;
}

+ (id)keywordWithKeyword:(id)arg1;
+ (void)initialize;
@property unsigned long long key; // @synthesize key=_key;
@property(retain) NSString *shortcutKey; // @synthesize shortcutKey=_shortcutKey;
@property(retain) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain) RDKeyword *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (long long)compareStringValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFavorite;
- (BOOL)isVisible;
- (id)description;
- (id)handleRemoveScriptCommand:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)photoKeys;
- (BOOL)_setStringValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (BOOL)_setShortcut:(id)arg1;
- (void)setShortcut:(id)arg1;
- (id)shortcut;
- (id)rkKeyword;
- (void)encodeWithDictionary:(id)arg1;
- (void)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(unsigned long long)arg1 stringValue:(id)arg2 shortcut:(id)arg3;
- (void)removeFromDB;
- (void)addToDB:(id)arg1;
- (void)dealloc;
- (id)initWithRKKeyword:(id)arg1;

@end


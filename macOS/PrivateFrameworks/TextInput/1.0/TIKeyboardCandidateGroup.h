//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSOrderedSet, NSString;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;
    NSOrderedSet *_candidates;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSOrderedSet *candidates; // @synthesize candidates=_candidates;
@property(copy) NSString *title; // @synthesize title=_title;
- (id)description;
- (void)addCandidate:(id)arg1;
- (BOOL)hasAlternativeText;
- (id)mutableCandidates;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 candidates:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


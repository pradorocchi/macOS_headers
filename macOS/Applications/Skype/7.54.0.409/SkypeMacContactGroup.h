//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SKContactGroup.h"

@class NSArray, NSString;

@interface SkypeMacContactGroup : SKContactGroup
{
    NSArray *subgroups;
    NSString *identifier;
    BOOL _isObservingSubgroups;
}

+ (id)macSkypeContactGroup;
+ (id)macAllContactGroup;
@property(copy, nonatomic) NSArray *subgroups; // @synthesize subgroups;
- (void).cxx_destruct;
- (void)removeContact:(id)arg1;
- (BOOL)canRemoveContact:(id)arg1;
- (void)addContact:(id)arg1;
- (BOOL)canAddContact:(id)arg1;
- (unsigned long long)numberOfContacts;
@property(copy, nonatomic) NSArray *contacts;
- (void)setSortOrderValue:(unsigned long long)arg1;
- (unsigned long long)sortOrderValue;
- (void)setExpanded:(BOOL)arg1;
- (BOOL)isExpanded;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (BOOL)isShared;
- (BOOL)isCustom;
- (id)identifier;
- (id)displayName;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingSubgroups;
- (void)_startObservingSubgroups;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSkyLibObjectID:(unsigned int)arg1;
- (id)initWithIdentifier:(id)arg1 subgroups:(id)arg2;

@end


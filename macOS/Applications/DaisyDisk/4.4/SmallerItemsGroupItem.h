//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DirectoryItem.h"

@interface SmallerItemsGroupItem : DirectoryItem
{
}

+ (void)setName:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (void)setCollected:(BOOL)arg1;
- (BOOL)isSortable;
- (void)removeObjectFromChildItems:(id)arg1;
- (void)insertObject:(id)arg1 inChildItemsAtIndex:(unsigned long long)arg2;
- (void)sortChildItemsBySizeNonRecursively;
- (void)sortChildItemsBySizeRecursively;
- (id)fullPath;
- (id)displayName;
- (id)name;
- (BOOL)isSmallerItems;
- (id)initWithParentDirectory:(id)arg1 smallerItems:(id)arg2;

@end


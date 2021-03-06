//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SIUInstallable : NSObject
{
    id _objectData;
    unsigned long long _diskSizeInKb;
    unsigned long long _installedSizeInKb;
}

+ (void)addUniqueString:(id)arg1 toArray:(id)arg2;
+ (void)addPropertyList:(id)arg1 forFile:(id)arg2 withPermissions:(id)arg3 binaryFormat:(BOOL)arg4 toDictionary:(id)arg5;
+ (void)addResourceFile:(id)arg1 toDictionary:(id)arg2;
+ (void)addRawList:(id)arg1 forFile:(id)arg2 toDictionary:(id)arg3;
+ (void)addRawData:(id)arg1 forFile:(id)arg2 toDictionary:(id)arg3;
+ (id)itemWithObject:(id)arg1;
@property(nonatomic) unsigned long long installedSizeInKb; // @synthesize installedSizeInKb=_installedSizeInKb;
@property(nonatomic) unsigned long long diskSizeInKb; // @synthesize diskSizeInKb=_diskSizeInKb;
@property(retain, nonatomic) id objectData; // @synthesize objectData=_objectData;
- (id)initWithDictionary:(id)arg1;
- (id)initWithArray:(id)arg1;
- (void)populateDictionary:(id)arg1;
- (void)addArrayItem:(id)arg1;
- (void)dealloc;

@end


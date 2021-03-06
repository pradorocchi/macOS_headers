//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "XARArchive.h"

@class NSDictionary;

@interface XIPArchive : XARArchive
{
    NSDictionary *_xipMetadata;
}

+ (id)metadataDictionaryInArchive:(id)arg1 threadingHandler:(id)arg2 incorrectChecksum:(char *)arg3 error:(id *)arg4;
+ (id)xarContentsPath;
+ (id)xarMetadataPath;
+ (BOOL)isXIPArchiveAtPath:(id)arg1;
+ (BOOL)isXIPArchiveAtURL:(id)arg1;
@property(copy, nonatomic) NSDictionary *xipMetadata; // @synthesize xipMetadata=_xipMetadata;
- (void).cxx_destruct;
- (void)loadPropertiesFromArchive:(id)arg1;
- (void)loadPropertiesFromCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)uncompressedFileSize;
- (BOOL)itemBelongsToPackageContents:(id)arg1 belongsToResources:(char *)arg2;
- (BOOL)doUnpackItems:(id)arg1 toDirectoryAtURL:(id)arg2 privilegedOpsHandler:(id)arg3 threadingHandler:(id)arg4 error:(id *)arg5;
- (BOOL)loadArchiveContentsAndReturnIncorrectChecksum:(char *)arg1 error:(id *)arg2;
- (BOOL)loadArchiveResourcesAndReturnIncorrectChecksum:(char *)arg1 error:(id *)arg2;
- (BOOL)loadArchiveInfoAndReturnIncorrectChecksum:(char *)arg1 error:(id *)arg2;
- (id)infoDictionary;

@end


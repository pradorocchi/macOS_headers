//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDFolderModel.h>

#import <PhotoLibraryPrivate/RDCloudSyncingModel-Protocol.h>
#import <PhotoLibraryPrivate/RDModelAttachments-Protocol.h>

@class NSString, RDCustomSortOrder;

@interface RDFolder : RDFolderModel <RDModelAttachments, RDCloudSyncingModel>
{
    int _spinlock;
    RDCustomSortOrder *_customSortOrder;
}

+ (id)implicitAlbumUuidDictionary;
+ (void)deleteFolders:(id)arg1 withReason:(unsigned short)arg2;
+ (id)trashFolderForDatabase:(id)arg1;
+ (id)removeFromTrash:(id)arg1 recoverVersions:(BOOL)arg2 recoverChildren:(BOOL)arg3 withReason:(unsigned short)arg4;
+ (id)removeFromTrash:(id)arg1 withReason:(unsigned short)arg2;
+ (id)putInTrash:(id)arg1 withReason:(unsigned short)arg2;
+ (id)newFolderWithName:(id)arg1 inFolder:(id)arg2 isMagic:(BOOL)arg3;
+ (id)newFolderWithName:(id)arg1 inFolder:(id)arg2;
+ (id)folderWithName:(id)arg1 inFolder:(id)arg2;
+ (id)folderUuidsForFolder:(id)arg1;
+ (id)foldersForFolder:(id)arg1;
+ (id)foldersFromDatabase:(id)arg1 withBaseFolderPath:(id)arg2;
+ (id)foldersFromDatabase:(id)arg1 withFolderType:(unsigned char)arg2;
+ (id)allFoldersFromDatabase:(id)arg1;
+ (id)libraryFolderInDatabase:(id)arg1;
+ (id)createMagicFolderWithUuid:(id)arg1 name:(id)arg2 forDatabase:(id)arg3;
+ (id)topLevelAlbumsFolderUuidForAlbumType:(long long)arg1;
+ (id)topLevelAlbumsFolderForAlbumType:(long long)arg1 fromDatabase:(id)arg2;
+ (id)sortKeyPathSplitter;
+ (id)pathExtension;
+ (void)recursivelyAddFolder:(id)arg1 toHierarchy:(id)arg2 uuidMap:(id)arg3 moveToTop:(id)arg4;
+ (void)repairFolderPathsWithRepair:(id)arg1;
+ (void)registerRepairBlocks:(id)arg1;
- (void).cxx_destruct;
- (long long)versionCount;
- (id)changePosterVersionUuid:(id)arg1;
- (id)fileSystemSafeName;
- (id)displayName;
- (id)availableNameForDuplicateStructure;
- (id)availableNameForFolderType:(unsigned char)arg1 baseName:(id)arg2;
- (id)availableNameForAlbum:(id)arg1;
- (id)changeName:(id)arg1;
- (void)_updateFoldersForOldFolderPath:(id)arg1 newPath:(id)arg2 contextModelResolver:(CDUnknownBlockType)arg3;
- (id)setParentFolder:(id)arg1 skipCustomOrderFixup:(BOOL)arg2 contextModelResolver:(CDUnknownBlockType)arg3;
- (id)setParentFolder:(id)arg1;
- (void)changeParentFolderTo:(id)arg1 from:(id)arg2 changes:(id)arg3 contextModelResolver:(CDUnknownBlockType)arg4;
- (void)setSortKeyPath:(id)arg1;
- (id)folderNotInTrash;
- (void)setIsInTrash:(BOOL)arg1 reason:(unsigned short)arg2;
- (void)setIsInTrash:(BOOL)arg1;
- (id)libraryRelativePath;
- (long long)hierarchyLevel;
- (BOOL)containsAlbumsOtherThanTypes:(id)arg1;
- (BOOL)containsAlbumsOfTypes:(id)arg1;
- (id)parentFolder;
- (id)parent;
- (void)setParentFolderUuid:(id)arg1;
- (BOOL)isTopLevelAlbumsFolder;
- (CDUnknownBlockType)willPersist;
- (id)folderPath;
- (id)sortDescriptors;
- (id)sortContainers:(id)arg1;
- (id)arrangeChildrenWithSortOrder:(id)arg1;
- (id)arrangedChildrenIgnoringHiddenFlag:(BOOL)arg1 includeTrash:(BOOL)arg2;
- (id)arrangedChildrenIgnoringHiddenFlag:(BOOL)arg1;
- (id)arrangedChildren;
- (id)allChildren;
- (BOOL)isCustomSorted;
- (id)customSortOrder;
- (id)ensureSubfolderExistsForPathComponents:(id)arg1 createdContainers:(id)arg2;
- (id)directChildFolders;
- (id)allDescendentAlbums;
- (id)albumsWithProperties:(id)arg1;
- (id)albums;
- (id)createImplicitAlbum;
- (id)implicitAlbum;
- (id)deleteFolders:(id)arg1;
- (id)_deleteFolder;
- (void)deleteFolderWithReason:(unsigned short)arg1;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)resetModelDefaultsAfterCopy;
- (void)setModelDefaults;
- (short)modelType;
- (void)initializeFolderPathForTemporaryModelIdWithParentFolder:(id)arg1;
- (id)initWithName:(id)arg1 inFolder:(id)arg2;
- (id)initWithName:(id)arg1 inFolder:(id)arg2 isMagic:(BOOL)arg3;
- (id)initWithName:(id)arg1 inFolder:(id)arg2 inDatabase:(id)arg3 isMagic:(BOOL)arg4;
- (id)initWithAddress:(id)arg1 uuid:(id)arg2 folderType:(unsigned char)arg3 name:(id)arg4 inFolder:(id)arg5 inDatabase:(id)arg6 isMagic:(BOOL)arg7;
- (id)initWithFolderType:(unsigned char)arg1 name:(id)arg2 inFolder:(id)arg3 inDatabase:(id)arg4 isMagic:(BOOL)arg5;
- (id)allAncestorFolders;
- (BOOL)isDescendantOfFolder:(id)arg1;
- (id)directSubfoldersOfFolderTypes:(id)arg1;
- (BOOL)isMissing;
- (id)allChildProjects;
- (id)folderDateRange;
- (id)setParentFolderLegacy:(id)arg1 skipCustomOrderFixup:(BOOL)arg2;
- (id)setParentFolderLegacy:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *cloudIdentifier;
@property(nonatomic) long long cloudLibraryState;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) BOOL hasBeenSynced;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL isCloudQuarantined;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IEFileSystemItem.h"

@class IDPathInfo, NSString;

__attribute__((visibility("hidden")))
@interface IEDevicePathFSI : IEFileSystemItem
{
    NSString *cachedFilePath;
    NSString *intendedCachedFilePath;
    IDPathInfo *idPathInfo;
    BOOL waitingOnBackgroundFileCache;
    BOOL waitingOnAtomicFileCache;
    BOOL loadedSpecialIcon;
    BOOL isRefreshingDescendants;
}

+ (id)sortArrayWithDirectoriesFirst:(id)arg1;
@property(retain, nonatomic) IDPathInfo *idPathInfo; // @synthesize idPathInfo;
- (void).cxx_destruct;
- (id)aliasTargetPath;
- (BOOL)isAlias;
- (BOOL)exists;
- (BOOL)isTopMostType;
- (BOOL)handlesContextMenu_UpdateSize;
- (BOOL)handlesContextMenu_ViewInFinder;
- (BOOL)handlesContextMenu_ExportToDestination;
- (BOOL)handlesContextMenu_AddFiles;
- (BOOL)handlesContextMenu_NewFolder;
- (BOOL)handlesContextMenu_Delete;
- (BOOL)handlesContextMenu_Dupelicate;
- (BOOL)handlesContextMenu_Paste;
- (BOOL)handlesContextMenu_Copy;
- (BOOL)handlesContextMenu_AddBookmark;
- (BOOL)handlesContextMenu_QuickLook;
- (BOOL)handlesContextMenu_OpenWith;
- (BOOL)handlesContextMenu_Open;
- (long long)writeBytes:(const void *)arg1 toOffset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)readDataFrom:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)targetDevicePathFSI;
- (BOOL)acceptsDrop;
- (void)clearCachedInfo;
- (id)cacheInBackground;
- (BOOL)isCachedFileLoaded;
- (void)cacheFromAction;
- (BOOL)isLoadingCachedFilePath;
- (id)intendedCachedFilePath;
- (id)cachedFilePathWithExtension;
- (id)cachedFilePath;
- (void)cancelOperation;
- (id)fileCopyNodeIntoChildren:(id)arg1 withTransferActionType:(int)arg2 withFileName:(id)arg3 statusItem:(id)arg4;
- (void)removeChildNoDelete:(id)arg1;
- (int)getTransferActionTypeWithFSI:(id)arg1 wantsCopy:(BOOL)arg2;
- (BOOL)isReadonly;
- (BOOL)shouldDelete;
- (id)protectedPaths;
- (BOOL)isDeleteable;
- (id)fileType;
- (id)lastModified;
- (id)fileLengthString;
- (id)fileLength;
- (BOOL)isDirectory;
- (id)getChildWithPath:(id)arg1;
- (BOOL)hasChildWithPath:(id)arg1;
- (BOOL)canBeRenamed;
- (void)setRelativePath:(id)arg1;
- (BOOL)isSpecialIconLoaded;
- (void)loadSpecialIcon;
- (BOOL)hasSpecialIcon;
- (id)displayImage;
- (id)deepFileItemList;
- (BOOL)canBeRemoved;
- (id)mountRelativePath;
- (id)displayPath;
- (id)fullPath;
- (id)relativePath;
- (BOOL)childrenAreLoaded;
- (void)removeAllChildren;
- (id)removeChildNode:(id)arg1 allowTrash:(BOOL)arg2;
- (void)removeChildNodeInternal:(id)arg1;
- (void)removeAllChildrenInternal;
- (void)addChildNode:(id)arg1;
- (id)addLink:(id)arg1 target:(id)arg2;
- (BOOL)canAddLinkChild;
- (id)addEmptyFileChild:(id)arg1;
- (id)addNewFolderChild:(id)arg1 focusAndRenameAfterCreation:(BOOL)arg2;
- (id)navbarIcon;
- (id)specialIcon;
- (BOOL)isMountable;
- (BOOL)isDeviceAppConnection;
- (id)children;
- (void)refreshChildren_NoUIRefresh;
- (void)refreshAllDescendants;
- (void)refreshChildren;
- (void)refreshIDPathInfoObject;
- (id)initWithPathInfo:(id)arg1 parent:(id)arg2;
- (id)initWithPath:(id)arg1 parent:(id)arg2 root:(id)arg3;

@end


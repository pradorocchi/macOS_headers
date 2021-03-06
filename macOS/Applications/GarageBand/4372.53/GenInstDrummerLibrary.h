//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GenInstDrummerLibraryModificationDateTracker, NSURL;

@interface GenInstDrummerLibrary : NSObject
{
    struct CGenGenerator *mGenerator;
    GenInstDrummerLibraryModificationDateTracker *mGenInstDrummerLibraryModificationDateTracker;
    NSURL *mLoadedLibraryURL;
    BOOL mIsLibraryValid;
}

+ (id)defaultGenreMappingPlistURL;
+ (id)defaultLibraryURL;
+ (BOOL)isDrummerContentAvailable;
+ (BOOL)isGenreMappingPlistAvailable;
+ (BOOL)isPatchDirectoryAvailable;
+ (BOOL)isLibraryAvailable;
+ (BOOL)getPatchFolderFileRef:(struct CFileRef *)arg1;
- (void)purgeUnneededStylesWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isLibraryValid;
- (void)checkIfLibraryIsValid;
- (void)libraryDidLoad;
- (void)libraryWillLoad;
- (void)loadLibrary;
- (void)reloadLibraryIfNewerLibraryFilesAreOnDisk;
- (struct CGenGenerator *)generator;
- (void)setupModificationDateTracker;
- (void)dealloc;
- (id)init;

@end


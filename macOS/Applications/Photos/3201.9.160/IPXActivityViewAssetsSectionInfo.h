//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXActivityViewSectionInfo.h"

@interface IPXActivityViewAssetsSectionInfo : IPXActivityViewSectionInfo
{
}

- (long long)indexOfItemWithAsset:(id)arg1;
- (BOOL)containsAsset:(id)arg1;
- (BOOL)areAllAssetsLiked;
- (void)getPhotoCount:(out unsigned long long *)arg1 videoCount:(out unsigned long long *)arg2;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;
- (id)cloudFeedAssetsEntry;
- (long long)sectionType;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IEFileSystemItem.h"

#import "MPFilterCapableItemProtocol-Protocol.h"

@class IEMediaTrack, NSString;

__attribute__((visibility("hidden")))
@interface IEFSIMediaTrack : IEFileSystemItem <MPFilterCapableItemProtocol>
{
    IEMediaTrack *track;
    unsigned long long readDataCount;
}

- (void).cxx_destruct;
- (id)statusIconToolTip;
- (id)statusIconNum;
- (int)statusIconInt;
- (id)displayImage;
- (id)previewHeaderLine2;
- (id)previewHeaderLine1;
- (id)getPreviewLabelKeyValuePairs;
- (id)sampleRate;
- (id)bitRateWithUnits;
- (id)bitRate;
- (id)year;
- (id)trackNumber;
- (id)size;
- (id)length;
- (id)fileType;
- (id)playCount;
- (id)starsAsChars;
- (id)stars;
- (id)genre;
- (id)album;
- (id)artist;
- (id)title;
- (id)playlistOrder;
- (BOOL)containingElementsMatchString:(id)arg1;
- (BOOL)isMountable;
- (id)mountRelativePath;
- (id)mountableChildren;
- (id)readDataFrom:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)lastModified;
- (id)fileLength;
- (id)targetDevicePathFSI;
- (BOOL)isLoadingCachedFilePath;
- (id)cacheInBackground;
- (BOOL)isCachedFileLoaded;
- (id)cachedFilePathWithExtension;
- (id)cachedFilePath;
- (id)track;
- (id)relativePath;
- (int)controlViewType;
- (id)initWithTrack:(id)arg1 parentFSI:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


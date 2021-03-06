//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IEDeviceDatabaseManager, NSDate, NSImage, NSMutableArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface IEPhotoImageInfo : NSObject
{
    IEDeviceDatabaseManager *parentDDM;
    NSNumber *thisID;
    NSNumber *songID;
    NSNumber *rating;
    NSDate *tempDate;
    NSDate *digitizedDate;
    NSDate *lastModifiedDate;
    NSNumber *sourceImageSize;
    NSMutableArray *subImages;
    NSString *originalFileName;
    BOOL isAlbumArt;
    BOOL isIOS5Type;
    int ios5ThumbnailIndex;
    NSString *dcimImagePath;
    NSString *imageRepresentationType;
    NSNumber *imageVersion;
    NSImage *loadedImage;
    NSImage *moviePreviewImage;
    NSNumber *iPhotoID;
    int photoType;
    NSNumber *imageWidth;
    NSNumber *imageHeight;
    BOOL _isCloudAsset;
    NSString *_thumbnailFormat;
}

@property(nonatomic) BOOL isCloudAsset; // @synthesize isCloudAsset=_isCloudAsset;
@property(retain, nonatomic) NSString *thumbnailFormat; // @synthesize thumbnailFormat=_thumbnailFormat;
@property(readonly) BOOL isIOS5Type; // @synthesize isIOS5Type;
@property(retain, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight;
@property(retain, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth;
@property(nonatomic) int photoType; // @synthesize photoType;
@property(retain, nonatomic) NSNumber *iPhotoID; // @synthesize iPhotoID;
@property(readonly) NSImage *loadedImage; // @synthesize loadedImage;
@property(readonly) NSNumber *imageVersion; // @synthesize imageVersion;
@property(readonly) NSString *imageRepresentationType; // @synthesize imageRepresentationType;
@property(retain, nonatomic) NSString *dcimImagePath; // @synthesize dcimImagePath;
@property(nonatomic) BOOL isAlbumArt; // @synthesize isAlbumArt;
@property(readonly) IEDeviceDatabaseManager *parentDDM; // @synthesize parentDDM;
@property(retain, nonatomic) NSString *originalFileName; // @synthesize originalFileName;
@property(retain, nonatomic) NSMutableArray *subImages; // @synthesize subImages;
@property(retain, nonatomic) NSNumber *sourceImageSize; // @synthesize sourceImageSize;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate;
@property(retain, nonatomic) NSDate *digitizedDate; // @synthesize digitizedDate;
@property(retain, nonatomic) NSDate *tempDate; // @synthesize tempDate;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating;
@property(retain, nonatomic) NSNumber *songID; // @synthesize songID;
@property(retain, nonatomic) NSNumber *thisID; // @synthesize thisID;
- (void).cxx_destruct;
@property(readonly) NSString *imageUID;
@property(readonly) NSString *imageTitle;
- (id)imageRepresentation;
@property(readonly) BOOL isDCIMImage;
- (void)setIOS5Thumbnail:(int)arg1;
- (BOOL)copyFullSizeImageToPath:(id)arg1;
- (id)fileSaveName;
- (id)getImage:(BOOL)arg1;
- (id)getNonFullFileTypeImage:(id)arg1;
- (id)imageDataForSubImageData:(id)arg1;
- (BOOL)containsFullSizeJPG;
- (id)pathOfFullSizeJPG;
- (id)subImageWithID:(id)arg1;
- (id)initDCIMImage:(id)arg1 parent:(id)arg2;
- (id)initWithParent:(id)arg1;

@end


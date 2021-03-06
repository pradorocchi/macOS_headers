//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSArrayController, NSDictionary, NSMutableArray, NSNumberFormatter, NSPopUpButton, NSString, NSTextField, PVImageSizeCalculator, PVSizerLinkView;

@interface PVImageSizer : NSWindowController
{
    NSPopUpButton *_fitIntoPopup;
    NSPopUpButton *_sizeUnitPopup;
    PVSizerLinkView *_linkView;
    NSArrayController *_selectedImagesController;
    NSTextField *_widthTextField;
    NSTextField *_heightTextField;
    NSNumberFormatter *_integerFormatter;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_percentFormatter;
    id _delegate;
    id _context;
    long long _fitIntoPreset;
    unsigned long long _sizeUnit;
    unsigned long long _alternateUnit;
    unsigned long long _resolutionUnit;
    BOOL _constrainProportions;
    BOOL _resample;
    NSMutableArray *_imageReps;
    NSString *_dataSizesString;
    PVImageSizeCalculator *_outputSizeCalculator;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (unsigned long long)defaultResolutionUnit;
+ (unsigned long long)defaultSizeUnit;
+ (unsigned long long)localizedSizeUnit;
@property(retain) NSString *dataSizesString; // @synthesize dataSizesString=_dataSizesString;
@property(nonatomic) BOOL resample; // @synthesize resample=_resample;
@property(nonatomic) BOOL constrainProportions; // @synthesize constrainProportions=_constrainProportions;
- (void).cxx_destruct;
- (id)objectInArray:(id)arg1 withIdentifier:(long long)arg2;
- (id)imageRepForImageElement:(id)arg1;
- (void)updateLinkView;
- (void)imageSizeCalculator:(id)arg1 completedImage:(id)arg2;
- (void)stopComputingDataSizes;
- (void)startComputingDataSizes;
- (BOOL)shouldComputeDataSizeEstimates;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;
- (void)alternateSizeButton:(id)arg1;
- (void)updateDataSizesString:(long long)arg1 numImages:(long long)arg2;
@property(readonly) __weak NSString *alternateSizeString;
@property __weak NSDictionary *alternateSizeUnit;
@property __weak NSDictionary *unitOfResolution;
@property __weak NSDictionary *unitOfSize;
- (void)updateUsingFitIntoPreset;
- (void)resetImageReps;
- (void)resetFitIntoPreset;
@property __weak NSDictionary *fitIntoPreset;
@property __weak id resolution;
@property __weak id height;
@property __weak id width;
@property(readonly) __weak NSArray *resolutionUnits;
@property(readonly) __weak NSArray *sizeUnits;
@property(readonly) __weak NSArray *fitIntoPresets;
- (id)makeTouchBar;
- (id)outputSpecsForImage:(id)arg1;
- (void)sizingDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)awakeFromNib;
- (void)showUIForImages:(id)arg1 withDelegate:(id)arg2 context:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end


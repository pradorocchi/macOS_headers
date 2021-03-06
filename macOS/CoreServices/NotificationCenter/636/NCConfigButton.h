//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

#import "NCMaterialReducedTransparencyDelegate-Protocol.h"

@interface NCConfigButton : NSButton <NCMaterialReducedTransparencyDelegate>
{
    _Bool _showsNewIndicator;
    double _titleWidth;
}

+ (Class)cellClass;
@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(nonatomic) _Bool showsNewIndicator; // @synthesize showsNewIndicator=_showsNewIndicator;
- (void)_setIndicatorImage;
- (struct CGSize)intrinsicContentSize;
- (void)setTitle:(id)arg1;
- (void)awakeFromNib;
- (void)increasedContrastChanged:(_Bool)arg1;
- (void)reducedTransparencyChanged:(_Bool)arg1;
- (void)dealloc;

@end


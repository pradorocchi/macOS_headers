//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICAttachmentBrickView.h"

@class NSImageView, NSView;

@interface ICAttachmentBrickWithImageView : ICAttachmentBrickView
{
    BOOL _alwaysUseFileIconImage;
    BOOL _showAsFileIcon;
    struct NSView *_imageContainerView;
    struct NSImageView *_imageView;
}

+ (struct NSColor *)imageBorderColor;
@property(nonatomic) BOOL showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(nonatomic) BOOL alwaysUseFileIconImage; // @synthesize alwaysUseFileIconImage=_alwaysUseFileIconImage;
- (void).cxx_destruct;
- (void)hostViewDidZoom:(id)arg1;
- (void)setImageInset:(double)arg1;
- (void)updateImageOutline;
- (void)attachmentPreviewImagesDidUpdate:(id)arg1;
- (void)setImageViewIsAccessibilityElement:(BOOL)arg1;
- (id)quickLookTransitionImageWithContentRect:(struct CGRect *)arg1;
- (struct CGRect)quickLookSourceFrameOnScreen;
- (void)viewDidMoveToWindow;
- (void)setIconImage:(struct NSImage *)arg1 contentMode:(unsigned long long)arg2;
- (void)prepareForPrinting;
- (void)setIconImage:(struct NSImage *)arg1;
- (double)iconSize;
- (struct NSView *)iconView;
- (void)updateContentFromAttachment;
- (id)initWithFrame:(struct CGRect)arg1;

@end


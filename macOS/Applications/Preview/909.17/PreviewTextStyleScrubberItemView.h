//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrubberItemView.h>

@class NSImage, NSImageView;

@interface PreviewTextStyleScrubberItemView : NSScrubberItemView
{
    long long _tag;
    NSImageView *_imageView;
}

@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
@property(copy) NSImage *contents;
- (id)initWithFrame:(struct CGRect)arg1;

@end


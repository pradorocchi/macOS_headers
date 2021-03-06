//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class NVUpDownScrollGesture;
@protocol NVOutlineViewKeyDelegate;

__attribute__((visibility("hidden")))
@interface NVOutlineView : NSOutlineView
{
    NVUpDownScrollGesture *_scrollGesture;
    id <NVOutlineViewKeyDelegate> _keyDelegate;
}

@property(nonatomic) __weak id <NVOutlineViewKeyDelegate> keyDelegate; // @synthesize keyDelegate=_keyDelegate;
@property(retain, nonatomic) NVUpDownScrollGesture *scrollGesture; // @synthesize scrollGesture=_scrollGesture;
- (void).cxx_destruct;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)setSelectionHighlightStyle:(long long)arg1;
- (long long)selectionHighlightStyle;
- (id)initWithCoder:(id)arg1;

@end


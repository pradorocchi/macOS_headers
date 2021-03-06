//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKAnnotationContainerView, MKAnnotationView, NSView;

@protocol MKAnnotationContainerViewDelegate <NSObject>
- (struct CGRect)annotationContainerVisibleRect:(MKAnnotationContainerView *)arg1;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(NSView *)arg2;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(NSView *)arg2;
- (double)annotationContainerZoomScale:(MKAnnotationContainerView *)arg1;
- (struct CGRect)visibleRectInView:(NSView *)arg1;
- (struct CGRect)visibleCenteringRectInView:(NSView *)arg1;
- (void)annotationContainerDidDropPins:(MKAnnotationContainerView *)arg1;
- (void)annotationContainerWillDropPins:(MKAnnotationContainerView *)arg1;
- (void)annotationContainerDidAnimateBubble:(MKAnnotationContainerView *)arg1;
- (void)annotationContainerWillAnimateBubble:(MKAnnotationContainerView *)arg1;
- (double)annotationContainer:(MKAnnotationContainerView *)arg1 pinDropDistanceForCoordinate:(struct CLLocationCoordinate2D)arg2 maxDistance:(double *)arg3;
- (void)annotationContainer:(MKAnnotationContainerView *)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint)arg2 annotationCoordinate:(struct CLLocationCoordinate2D)arg3 completionHandler:(void (^)(void))arg4;
- (void)annotationContainer:(MKAnnotationContainerView *)arg1 calloutPrimaryActionTriggeredForAnnotationView:(MKAnnotationView *)arg2;
- (BOOL)annotationContainerIsRotated:(MKAnnotationContainerView *)arg1;
- (BOOL)annotationContainerShouldAlignToPixels:(MKAnnotationContainerView *)arg1;

@optional
- (void)annotationContainerDidFinishMapsTransitionExpanding:(MKAnnotationContainerView *)arg1;
@end


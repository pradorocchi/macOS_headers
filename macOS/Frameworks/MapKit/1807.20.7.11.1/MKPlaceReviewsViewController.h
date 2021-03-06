//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPlaceReviewAvatarGenerator, NSArray, NSMutableArray, NSString;
@protocol MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate;

@interface MKPlaceReviewsViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    MKMapItem *_mapItem;
    id <MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> _reviewsControllerDelegate;
    MKPlaceReviewAvatarGenerator *_avatarGenerator;
    NSArray *_userSnippets;
    NSMutableArray *_cells;
}

@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) NSArray *userSnippets; // @synthesize userSnippets=_userSnippets;
@property(retain, nonatomic) MKPlaceReviewAvatarGenerator *avatarGenerator; // @synthesize avatarGenerator=_avatarGenerator;
@property(nonatomic) __weak id <MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> reviewsControllerDelegate; // @synthesize reviewsControllerDelegate=_reviewsControllerDelegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_showReview:(id)arg1 index:(unsigned long long)arg2;
- (void)_viewAllReviews;
- (id)reviewAtIndex:(unsigned long long)arg1;
- (unsigned long long)reviewsCount;
- (void)loadCells;
- (void)_updateAttribution;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


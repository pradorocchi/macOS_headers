//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InputMethodKit/IMKUIView.h>

@class IMKCandidateController, NSArray;

@interface IMKCandidateGroupView : IMKUIView
{
    IMKCandidateController *_candidateController;
    NSArray *_groupsWithPositions;
}

@property(retain, nonatomic) NSArray *groupsWithPositions; // @synthesize groupsWithPositions=_groupsWithPositions;
@property(nonatomic) IMKCandidateController *candidateController; // @synthesize candidateController=_candidateController;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)dealloc;

@end


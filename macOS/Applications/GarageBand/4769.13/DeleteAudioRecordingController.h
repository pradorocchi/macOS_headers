//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CustomAlertController.h"

@class NSMatrix, NSString;

@interface DeleteAudioRecordingController : CustomAlertController
{
    NSMatrix *selection;
    id fileName;
    id regionName;
    id regionNameLabel;
    id dontAskAgain;
    int _all;
    BOOL mAllButt;
    NSString *mSegName;
    NSString *mFileName;
}

+ (int)alert:(int *)arg1 withFileName:(id)arg2 andSegName:(id)arg3;
+ (id)nibName;
- (void)updateUI;
- (void)click_OK:(id)arg1;

@end


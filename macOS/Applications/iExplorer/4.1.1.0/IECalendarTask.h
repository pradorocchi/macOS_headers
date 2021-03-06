//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalTask, NSDate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface IECalendarTask : NSObject
{
    int taskID;
    NSString *summary;
    int priority;
    NSDate *dueDate;
    NSDate *completionDate;
    NSString *description;
    NSDate *userModDate;
    NSDate *creationDate;
    NSDate *startDate;
    NSDate *reminderDate;
    int privacyLevel;
    BOOL isRecurring;
    NSMutableArray *alarms;
    CalTask *calTask;
}

@property(nonatomic) CalTask *calTask; // @synthesize calTask;
@property(readonly, nonatomic) NSMutableArray *alarms; // @synthesize alarms;
@property(readonly, nonatomic) BOOL isRecurring; // @synthesize isRecurring;
@property(readonly, nonatomic) int privacyLevel; // @synthesize privacyLevel;
@property(readonly, nonatomic) NSDate *reminderDate; // @synthesize reminderDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate;
@property(readonly, nonatomic) NSDate *userModDate; // @synthesize userModDate;
@property(readonly, nonatomic) NSString *description; // @synthesize description;
@property(readonly, nonatomic) NSDate *completionDate; // @synthesize completionDate;
@property(readonly, nonatomic) NSDate *dueDate; // @synthesize dueDate;
@property(readonly, nonatomic) int priority; // @synthesize priority;
@property(readonly, nonatomic) NSString *summary; // @synthesize summary;
@property(readonly, nonatomic) int taskID; // @synthesize taskID;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1;
- (id)initWithRow:(id)arg1;

@end


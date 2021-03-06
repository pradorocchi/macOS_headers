//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSPopoverDelegate-Protocol.h"
#import "TSKChangeSourceObserver-Protocol.h"

@class NSButton, NSDate, NSDatePicker, NSLayoutConstraint, NSPopUpButton, NSString, TSKMacNSPopover, TSWPDateTimeSmartField, TSWPRep;

@interface TSWPMacDateTimeFieldViewController : NSViewController <NSPopoverDelegate, TSKChangeSourceObserver>
{
    TSKMacNSPopover *_popover;
    TSWPRep *_textRep;
    TSWPDateTimeSmartField *_dateTimeField;
    BOOL _calendarVisible;
    NSPopUpButton *_formatButton;
    NSDatePicker *_datePicker;
    NSDatePicker *_timePicker;
    NSDatePicker *_calendar;
    NSButton *_updateNowButton;
    NSButton *_toggleCalendarButton;
    NSLayoutConstraint *_bottomSpaceConstraint;
    NSDate *_date;
    long long _dateStyle;
    long long _timeStyle;
}

@property(nonatomic) long long timeStyle; // @synthesize timeStyle=_timeStyle;
@property(nonatomic) long long dateStyle; // @synthesize dateStyle=_dateStyle;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) TSWPDateTimeSmartField *dateTimeField; // @synthesize dateTimeField=_dateTimeField;
@property(retain, nonatomic) TSWPRep *textRep; // @synthesize textRep=_textRep;
@property(readonly, nonatomic) TSKMacNSPopover *popover; // @synthesize popover=_popover;
@property NSLayoutConstraint *bottomSpaceConstraint; // @synthesize bottomSpaceConstraint=_bottomSpaceConstraint;
@property(nonatomic) NSButton *toggleCalendarButton; // @synthesize toggleCalendarButton=_toggleCalendarButton;
@property(nonatomic) NSButton *updateNowButton; // @synthesize updateNowButton=_updateNowButton;
@property(nonatomic) NSDatePicker *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) NSDatePicker *timePicker; // @synthesize timePicker=_timePicker;
@property(nonatomic) NSDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) NSPopUpButton *formatButton; // @synthesize formatButton=_formatButton;
- (void)p_closePopover:(id)arg1;
- (void)dismissDateTimeInfo;
- (void)p_commandWillEnqueue:(id)arg1;
- (void)p_removeObserversFromNotificationCenter;
- (void)p_addObserversToNotificationCenter;
- (void)p_updateDateTimeField;
- (void)p_updateAllDateTimeFields;
- (void)p_updateDateTimeField:(id)arg1;
- (void)p_updateStateFromFormat;
- (void)p_rebuildFormatsMenu;
- (void)p_propogateDateChangeWithSender:(id)arg1;
- (id)p_defaultDateTimeFormats;
- (void)p_updateCalendarVisibility;
- (struct CGRect)p_viewBoundsOfDateTimeField;
- (id)commandController;
- (id)documentRoot;
- (void)takeUpdateAllFrom:(id)arg1;
- (void)takeUpdateNowFrom:(id)arg1;
- (void)takeDateTimeFrom:(id)arg1;
- (void)takeFormatFrom:(id)arg1;
- (void)takeToggleCalendarFrom:(id)arg1;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)p_updateUIFromField;
- (void)showDateTimeInfoForField:(id)arg1 inRep:(id)arg2;
- (void)awakeFromNib;
- (id)nibName;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EKEventEditItem.h>
#import <EventKitUI/EKTimeZoneViewControllerDelegate.h>
#import <EventKitUI/EKCellShortener.h>

@class NSDateComponents, NSTimeZone, PreferencesTwoPartValueCell, UITableViewCell, UIDatePicker;

@interface EKEventDateEditItem : EKEventEditItem <EKTimeZoneViewControllerDelegate, EKCellShortener> {

	NSDateComponents* _startComponents;
	NSDateComponents* _endComponents;
	BOOL _allDay;
	NSTimeZone* _timeZone;
	PreferencesTwoPartValueCell* _startDateCell;
	PreferencesTwoPartValueCell* _endDateCell;
	UITableViewCell* _allDayCell;
	UITableViewCell* _timeZoneCell;
	UITableViewCell* _startDatePickerCell;
	UITableViewCell* _endDatePickerCell;
	int _selectedSubitem;
	UIDatePicker* _startDatePicker;
	UIDatePicker* _endDatePicker;
	BOOL _endTimeWasMessedUp;
	BOOL _changingDate;
	int _shorteningStatus;
	BOOL _supportsTimeZone;
	BOOL _showsAllDay;

}

@property (assign,nonatomic) BOOL supportsTimeZone;              //@synthesize supportsTimeZone=_supportsTimeZone - In the implementation block
@property (assign,nonatomic) BOOL showsAllDay;                   //@synthesize showsAllDay=_showsAllDay - In the implementation block
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(void)endInlineEditing;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(void)editor:(id)arg1 didStartEditingItem:(id)arg2 ;
-(BOOL)requiresReconfigurationOnCommit;
-(unsigned)numberOfSubitemsInSubsection:(unsigned)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 inSubsection:(unsigned)arg2 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 inSubsection:(unsigned)arg2 forWidth:(float)arg3 ;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned)arg2 inSubsection:(unsigned)arg3 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned)arg2 inSubsection:(unsigned)arg3 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned)arg1 inSubsection:(unsigned)arg2 ;
-(id)_calendarForEventComponents;
-(void)_setEndDate:(id)arg1 ;
-(void)_setAllDay:(BOOL)arg1 ;
-(void)_setTimeZone:(id)arg1 ;
-(void)_updateDatePickerAnimated:(BOOL)arg1 ;
-(BOOL)_shouldShowTimeZone;
-(void)_allDayChanged:(id)arg1 ;
-(void)_datePickerChanged:(id)arg1 ;
-(void)_datePickerDoubleTapped:(id)arg1 ;
-(id)_newDatePicker;
-(id)_dateComponentsInSystemCalendarFromDate:(id)arg1 ;
-(id)_dateInSystemCalendarFromComponents:(id)arg1 ;
-(int)_subitemForRow:(int)arg1 ;
-(id)_startDateCell;
-(id)_endDateCell;
-(id)_allDayCell;
-(id)_timeZoneCell;
-(id)_timeZoneDescription;
-(id)_startDatePickerCell;
-(id)_endDatePickerCell;
-(void)_hideDatePicker;
-(int)_rowForSubitem:(int)arg1 ;
-(void)_updateDateColors;
-(void)_resetStartString:(BOOL)arg1 endString:(BOOL)arg2 ;
-(void)_updateTimeWidths;
-(void)_pickNextReasonableTime;
-(BOOL)_endDateIsBeforeStartDate;
-(void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2 ;
-(void)timeZoneViewControllerDidCancel:(id)arg1 ;
-(void)shortenCell:(id)arg1 ;
-(BOOL)supportsTimeZone;
-(void)setSupportsTimeZone:(BOOL)arg1 ;
-(BOOL)showsAllDay;
-(void)setShowsAllDay:(BOOL)arg1 ;
-(id)init;
-(BOOL)isInline;
-(void)_setStartDate:(id)arg1 ;
-(void).cxx_destruct;
@end

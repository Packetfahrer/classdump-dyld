/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/CalendarEventLoaderDelegate.h>

@protocol OccurrenceCacheDataSourceProtocol;
@class EKEventStore, CalendarEventLoader, NSLock, NSArray, _EKNotificationMonitor, , NSSet, NSString, NSCalendar, EKCalendarDate, EKEvent;

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate> {

	EKEventStore* _eventStore;
	CalendarEventLoader* _eventLoader;
	NSLock* _filterLock;
	NSArray* _visibleCalendars;
	int _readWriteCalendarCount;
	int _invitationBearingStoresExist;
	_EKNotificationMonitor* _notificationMonitor;
	<OccurrenceCacheDataSourceProtocol>* _occurrenceCacheDataSource;
	int _cachedFakeTodayIndex;
	NSSet* _selectedCalendars;
	NSString* _searchString;
	NSCalendar* _calendar;
	EKCalendarDate* _selectedDate;
	unsigned _firstVisibleSecond;
	EKEvent* _selectedOccurrence;

}

@property (nonatomic,readonly) EKEventStore * eventStore;                 //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                         //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) EKCalendarDate * selectedDate;                 //@synthesize selectedDate=_selectedDate - In the implementation block
@property (nonatomic,readonly) EKCalendarDate * selectedDay; 
@property (nonatomic,readonly) int visibleCalendarCount; 
@property (nonatomic,readonly) int readWriteCalendarCount; 
@property (assign,nonatomic) unsigned firstVisibleSecond;                 //@synthesize firstVisibleSecond=_firstVisibleSecond - In the implementation block
@property (nonatomic,retain) EKEvent * selectedOccurrence;                //@synthesize selectedOccurrence=_selectedOccurrence - In the implementation block
@property (nonatomic,retain) NSSet * selectedCalendars;                   //@synthesize selectedCalendars=_selectedCalendars - In the implementation block
@property (nonatomic,retain) NSString * searchString;                     //@synthesize searchString=_searchString - In the implementation block
-(id)eventStore;
-(id)defaultCalendarForNewEvents;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)setSelectedCalendars:(id)arg1 ;
-(id)selectedCalendars;
-(void)_eventStoreChanged:(id)arg1 ;
-(void)setFirstVisibleSecond:(unsigned)arg1 ;
-(unsigned)firstVisibleSecond;
-(void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3 ;
-(void)addOccurrenceAwaitingRefresh:(id)arg1 ;
-(void)addOccurrenceAwaitingDeletion:(id)arg1 ;
-(void)setComponentForExpandingRequests:(unsigned)arg1 ;
-(void)setComponentForExpandingPadding:(unsigned)arg1 ;
-(void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(BOOL)cachedOccurrencesAreLoaded;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 ;
-(int)sectionForCachedOccurrencesOnDate:(id)arg1 ;
-(int)visibleCalendarCount;
-(void)_tzSupportTodayRolledOver;
-(void)_searchResultsAvailable:(id)arg1 ;
-(void)_searchFoundDateToScrollTo:(id)arg1 ;
-(id)selectedOccurrence;
-(void)setSelectedOccurrence:(id)arg1 ;
-(void)_processReloadForCacheOnly:(BOOL)arg1 includingCalendars:(BOOL)arg2 checkCalendarsValid:(BOOL)arg3 ;
-(id)occurrencesForDay:(id)arg1 waitForLoad:(BOOL)arg2 ;
-(id)dateForCachedOccurrencesInSection:(int)arg1 ;
-(int)cachedFakeTodayIndex;
-(int)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2 ;
-(void)_invalidateCachedOccurrences;
-(void)_reloadIfTodayDetermined;
-(void)_notificationsExpired:(id)arg1 ;
-(void)_notificationCountExpired:(id)arg1 ;
-(id)_notificationMonitor;
-(BOOL)selectedOccurrenceIsSearchMatch;
-(int)readWriteCalendarCount;
-(void)ensureCalendarVisibleWithId:(id)arg1 ;
-(BOOL)isCalendarVisibleWithID:(id)arg1 ;
-(void)refreshAccountListIfNeeded:(BOOL)arg1 ;
-(void)refreshCalendarDataIfNeeded:(BOOL)arg1 ;
-(void)setSelectedDate:(id)arg1 ;
-(id)selectedDay;
-(id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(id)selectedDateOccurrences:(BOOL)arg1 loadIsComplete:(BOOL*)arg2 ;
-(id)closestOccurrenceToTomorrowForEventUID:(int)arg1 ;
-(void)setDesiredPaddingDays:(unsigned)arg1 ;
-(void)setMaxCachedDays:(unsigned)arg1 ;
-(int)numberOfDaysWithCachedOccurrences;
-(int)numberOfCachedOccurrencesInSection:(int)arg1 ;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(int)arg1 ;
-(void)_occurrenceCacheChanged;
-(void)updateAfterAppResume;
-(void)prepareForAppSuspend;
-(void)_systemWake;
-(BOOL)invitationBearingStoresExistForEvents;
-(unsigned)allNotificationsCount;
-(id)allNotifications;
-(id)recentNotifications;
-(BOOL)searchingOccurrences;
-(id)selectedDate;
-(void)dealloc;
-(id)init;
-(double)_tomorrow;
-(void)setCalendar:(id)arg1 ;
-(id)calendar;
-(void)setSearchString:(id)arg1 ;
-(id)searchString;
-(void)_localeChanged:(id)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
-(void).cxx_destruct;
@end

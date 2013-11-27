/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSError;

@interface CalDAVRefreshContext : NSObject {

	BOOL _isForced;
	BOOL _wasUserRequested;
	BOOL _wasDueToPush;
	BOOL _isCalendarsOnly;
	BOOL _didDownloadEvents;
	BOOL _didSaveDatabase;
	BOOL _shouldSave;
	BOOL _shouldSaveAccounts;
	BOOL _calendarFailedToSync;
	double _startTime;
	int _numDownloadedElements;
	BOOL _shouldRetry;
	int _retryTime;
	NSError* _error;
	unsigned _localItems;

}

@property (assign,nonatomic) BOOL isForced;                          //@synthesize isForced=_isForced - In the implementation block
@property (assign,nonatomic) BOOL wasUserRequested;                  //@synthesize wasUserRequested=_wasUserRequested - In the implementation block
@property (assign,nonatomic) BOOL wasDueToPush;                      //@synthesize wasDueToPush=_wasDueToPush - In the implementation block
@property (assign,nonatomic) BOOL isCalendarsOnly;                   //@synthesize isCalendarsOnly=_isCalendarsOnly - In the implementation block
@property (assign,nonatomic) BOOL didDownloadEvents;                 //@synthesize didDownloadEvents=_didDownloadEvents - In the implementation block
@property (assign,nonatomic) BOOL didSaveDatabase;                   //@synthesize didSaveDatabase=_didSaveDatabase - In the implementation block
@property (assign,nonatomic) BOOL shouldSave;                        //@synthesize shouldSave=_shouldSave - In the implementation block
@property (assign,nonatomic) BOOL shouldSaveAccounts;                //@synthesize shouldSaveAccounts=_shouldSaveAccounts - In the implementation block
@property (assign,nonatomic) BOOL calendarFailedToSync;              //@synthesize calendarFailedToSync=_calendarFailedToSync - In the implementation block
@property (assign,nonatomic) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) int numDownloadedElements;              //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
@property (assign,nonatomic) BOOL shouldRetry;                       //@synthesize shouldRetry=_shouldRetry - In the implementation block
@property (assign,nonatomic) int retryTime;                          //@synthesize retryTime=_retryTime - In the implementation block
@property (nonatomic,retain) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned localItems;                    //@synthesize localItems=_localItems - In the implementation block
+(id)defaultContext;
-(void)setError:(id)arg1 ;
-(unsigned)localItems;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(void)setShouldSave:(BOOL)arg1 ;
-(BOOL)shouldSaveAccounts;
-(BOOL)isCalendarsOnly;
-(BOOL)calendarFailedToSync;
-(BOOL)shouldSave;
-(void)setLocalItems:(unsigned)arg1 ;
-(void)setIsCalendarsOnly:(BOOL)arg1 ;
-(void)setNumDownloadedElements:(int)arg1 ;
-(void)setShouldSaveAccounts:(BOOL)arg1 ;
-(void)setCalendarFailedToSync:(BOOL)arg1 ;
-(int)retryTime;
-(void)setRetryTime:(int)arg1 ;
-(void)setShouldRetry:(BOOL)arg1 ;
-(void)setIsForced:(BOOL)arg1 ;
-(BOOL)wasUserRequested;
-(void)setWasUserRequested:(BOOL)arg1 ;
-(BOOL)wasDueToPush;
-(void)setWasDueToPush:(BOOL)arg1 ;
-(BOOL)didDownloadEvents;
-(void)setDidDownloadEvents:(BOOL)arg1 ;
-(BOOL)didSaveDatabase;
-(void)setDidSaveDatabase:(BOOL)arg1 ;
-(BOOL)shouldRetry;
-(int)numDownloadedElements;
-(id)error;
-(BOOL)isForced;
@end

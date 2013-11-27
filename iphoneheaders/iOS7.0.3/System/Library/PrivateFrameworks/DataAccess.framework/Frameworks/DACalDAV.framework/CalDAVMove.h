/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface CalDAVMove : NSObject {

	int _sourceCalendarID;
	int _itemID;
	NSString* _oldExternalID;
	int _changeID;

}

@property (assign) int sourceCalendarID;                  //@synthesize sourceCalendarID=_sourceCalendarID - In the implementation block
@property (assign) int itemID;                            //@synthesize itemID=_itemID - In the implementation block
@property (retain) NSString * oldExternalID;              //@synthesize oldExternalID=_oldExternalID - In the implementation block
@property (assign) int changeID;                          //@synthesize changeID=_changeID - In the implementation block
-(int)itemID;
-(void)dealloc;
-(id)initWithSourceCalendarID:(int)arg1 itemID:(int)arg2 oldExternalID:(id)arg3 changeID:(int)arg4 ;
-(id)oldExternalID;
-(int)changeID;
-(int)sourceCalendarID;
-(void)setSourceCalendarID:(int)arg1 ;
-(void)setItemID:(int)arg1 ;
-(void)setOldExternalID:(id)arg1 ;
-(void)setChangeID:(int)arg1 ;
@end

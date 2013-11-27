/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@class EKObjectID, NSDate, NSTimeZone;

@interface EKPersistentReminder : EKPersistentCalendarItem {

	EKObjectID* _parentID;

}

@property (nonatomic,copy) NSDate * dueDate; 
@property (nonatomic,copy) NSTimeZone * dueDateTimeZone; 
@property (assign,nonatomic) BOOL dueDateAllDay; 
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) unsigned displayOrder; 
@property (nonatomic,copy) EKObjectID * parentID;                            //@synthesize parentID=_parentID - In the implementation block
+(id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2 ;
-(BOOL)validate:(id*)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(unsigned)displayOrder;
-(void)setDisplayOrder:(unsigned)arg1 ;
-(id)externalURI;
-(void)_sendModifiedNote;
-(id)dueDate;
-(id)dueDateTimeZone;
-(BOOL)dueDateAllDay;
-(id)completionDate;
-(void)setCompletionDate:(id)arg1 ;
-(id)parentID;
-(void)setParentID:(id)arg1 ;
-(void)setDueDate:(id)arg1 ;
-(void)setDueDateTimeZone:(id)arg1 ;
-(void)setDueDateAllDay:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(int)entityType;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

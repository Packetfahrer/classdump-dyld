/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn {

	NSSQLToOne* _toOne;

}
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)toOneRelationship;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(void)dealloc;
@end


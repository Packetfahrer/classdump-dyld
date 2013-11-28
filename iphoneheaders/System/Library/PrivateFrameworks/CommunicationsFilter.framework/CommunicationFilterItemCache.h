/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class CommunicationFilterItem;

@interface CommunicationFilterItemCache : NSObject {

	CommunicationFilterItem* _filterItem;
	long long _isInList;

}

@property (assign,nonatomic) long long isInList;              //@synthesize isInList=_isInList - In the implementation block
-(void)dealloc;
-(id)initWithFilterItem:(id)arg1 isInList:(long long)arg2 ;
-(BOOL)matchesItem:(id)arg1 ;
-(long long)isInList;
-(void)setIsInList:(long long)arg1 ;
@end

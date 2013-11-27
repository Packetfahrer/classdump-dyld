/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject {

	SSSQLiteDatabase* _database;

}
-(void)dealloc;
-(id)init;
-(id)initReadOnly;
-(void)readUsingSessionBlock:(/*^block*/ id)arg1 ;
-(void)modifyUsingTransactionBlock:(/*^block*/ id)arg1 ;
-(void)modifyAsyncUsingTransactionBlock:(/*^block*/ id)arg1 ;
-(id)_initReadOnly:(BOOL)arg1 ;
-(void)_dispatchBlockAsync:(/*^block*/ id)arg1 ;
-(void)readAsyncUsingSessionBlock:(/*^block*/ id)arg1 ;
@end

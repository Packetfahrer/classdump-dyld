/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSContext;

@interface JSObjCClassInfo : NSObject {

	JSContext* m_context;
	Class m_class;
	bool m_block;
	OpaqueJSClass* m_classRef;
	Weak<JSC::JSObject>* m_prototype;
	Weak<JSC::JSObject>* m_constructor;

}
-(void)allocateConstructorAndPrototypeWithSuperClassInfo:(id)arg1 ;
-(void)reallocateConstructorAndOrPrototype;
-(id)initWithContext:(id)arg1 forClass:(Class)arg2 superClassInfo:(id)arg3 ;
-(id)wrapperForObject:(id)arg1 ;
-(id)constructor;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

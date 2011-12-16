//
// cocos2d
//

#import "cocos2d.h"

//CLASS INTERFACE
@interface AppController : NSObject <UIApplicationDelegate>
{
	UIWindow *window_;
	
	UIViewController *viewController_;				// weak ref
	UINavigationController *navigationController_;	// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) UIViewController *viewController;
@property (readonly) UINavigationController *navigationController;

@end
@interface Layer1 : CCLayer
{
	CCLabelBMFont *label0;
	CCLabelBMFont *label1;
	CCLabelBMFont *label2;
	CCLabelBMFont *label3;
	CCLabelBMFont *label4;
	
	ccTime time0, time1, time2, time3, time4;
}

-(void) step1: (ccTime) dt;
-(void) step2: (ccTime) dt;
-(void) step3: (ccTime) dt;
-(void) step4: (ccTime) dt;

@end

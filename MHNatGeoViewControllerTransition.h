#import <Foundation/Foundation.h>

@interface MHNatGeoViewControllerTransition : NSObject

@property (assign, nonatomic, getter = isDimissing) BOOL dismissing;

@property (strong, nonatomic) UIView *sourceView;
@property (strong, nonatomic) UIView *destinationView;
@property (assign, nonatomic) NSTimeInterval duration;

- (id)initWithSourceView:(UIView *)sourceView destinationView:(UIView *)destinationView duration:(NSTimeInterval)duration;
- (void)perform;
- (void)perform:(void (^)(BOOL finished))completion;
+ (void) presentViewControllerTransition:(UIViewController*)destination source:(UIViewController*)source duration:(NSTimeInterval) duration completion:(void (^)(BOOL finished))completion;
+ (void)dismissViewController:(UIViewController *)viewController duration:(NSTimeInterval)duration completion:(void (^)(BOOL finished))completion;

@end

#pragma mark - UIViewController(MHNatGeoViewControllerTransition)
@interface UIViewController(MHNatGeoViewControllerTransition)

@property(nonatomic,retain) UIViewController * presentedFromViewController;

- (void)presentNatGeoViewController:(UIViewController *)viewController completion:(void (^)(BOOL finished))completion;
- (void)presentNatGeoViewController:(UIViewController *)viewController;
-(void) dismissNatGeoViewControllerWithCompletion:(void (^)(BOOL finished))completion;
-(void) dismissNatGeoViewController;

@end;
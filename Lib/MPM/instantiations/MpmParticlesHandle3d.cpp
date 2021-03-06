#include <MPM/MpmParticleHandleBase.cpp>
namespace ZIRAN {
template class MpmParticleHandleBase<double, 3>;
extern template class MpmForceBase<double, 3>;
template void MpmParticleHandleBase<double, 3>::addFJMixedMpmForce<NeoHookeanIsotropic<double, 3>, QuadraticVolumePenalty<double, 3>>(NeoHookeanIsotropic<double, 3> const&, QuadraticVolumePenalty<double, 3> const&, MATERIAL_PHASE_ENUM, MATERIAL_PROPERTY_ENUM, bool);
template void MpmParticleHandleBase<double, 3>::addFJMixedMpmForce<StvkWithHenckyIsotropic<double, 3>, QuadraticVolumePenalty<double, 3>>(StvkWithHenckyIsotropic<double, 3> const&, QuadraticVolumePenalty<double, 3> const&, MATERIAL_PHASE_ENUM, MATERIAL_PROPERTY_ENUM, bool);
template void MpmParticleHandleBase<double, 3>::addFJMixedMpmForce<CorotatedElasticity<double, 3>, QuadraticVolumePenalty<double, 3>>(CorotatedElasticity<double, 3> const&, QuadraticVolumePenalty<double, 3> const&, MATERIAL_PHASE_ENUM, MATERIAL_PROPERTY_ENUM, bool);
template void MpmParticleHandleBase<double, 3>::addFJMixedMpmForce<CorotatedIsotropic<double, 3>, QuadraticVolumePenalty<double, 3>>(CorotatedIsotropic<double, 3> const&, QuadraticVolumePenalty<double, 3> const&, MATERIAL_PHASE_ENUM, MATERIAL_PROPERTY_ENUM, bool);
template void MpmParticleHandleBase<double, 3>::addFJMixedMpmForce<LinearCorotated<double, 3>, QuadraticVolumePenalty<double, 3>>(LinearCorotated<double, 3> const&, QuadraticVolumePenalty<double, 3> const&, MATERIAL_PHASE_ENUM, MATERIAL_PROPERTY_ENUM, bool);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForceWithAnisotropicPhaseField<NeoHookeanBorden<double, 3>>(const StdVector<Vector<double, 3>>, const StdVector<double>, const double&, const double&, NeoHookeanBorden<double, 3> const&, const double, const double, bool, const double);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForceWithAnisotropicPhaseField<QRAnisotropic<double, 3>>(const StdVector<Vector<double, 3>>, const StdVector<double>, const double&, const double&, QRAnisotropic<double, 3> const&, const double, const double, bool, const double);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForceWithAnisotropicPhaseField<QRStableNeoHookean<double, 3>>(const StdVector<Vector<double, 3>>, const StdVector<double>, const double&, const double&, QRStableNeoHookean<double, 3> const&, const double, const double, bool, const double);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForceWithPhaseField<NeoHookeanBorden<double, 3>>(const double&, const double&, NeoHookeanBorden<double, 3> const&, bool, const double);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<CorotatedElasticity<double, 3>>(CorotatedElasticity<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<CorotatedIsotropic<double, 3>>(CorotatedIsotropic<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<QRAnisotropic<double, 3>>(QRAnisotropic<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<QRStableNeoHookean<double, 3>>(QRStableNeoHookean<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<CotangentOrthotropic<double, 3>>(CotangentOrthotropic<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<LinearElasticity<double, 3>>(LinearElasticity<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<LinearCorotated<double, 3>>(LinearCorotated<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<NeoHookean<double, 3>>(NeoHookean<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<NeoHookeanBorden<double, 3>>(NeoHookeanBorden<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<NeoHookeanIsotropic<double, 3>>(NeoHookeanIsotropic<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<StVenantKirchhoff<double, 3>>(StVenantKirchhoff<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<StvkWithHencky<double, 3>>(StvkWithHencky<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<StvkWithHenckyDecoupled<double, 3>>(StvkWithHenckyDecoupled<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<StvkWithHenckyIsotropic<double, 3>>(StvkWithHenckyIsotropic<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<Smudge<double, 3>>(Smudge<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<StvkWithHenckyIsotropicUnilateral<double, 3>>(StvkWithHenckyIsotropicUnilateral<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFBasedMpmForce<SurfaceTension<double, 3>>(SurfaceTension<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addFDecoupledBasedMpmForce<StvkWithHenckyDecoupled<double, 3>>(StvkWithHenckyDecoupled<double, 3> const&, double);
template void MpmParticleHandleBase<double, 3>::addFElasticNonequilibratedBasedMpmForce<StvkWithHencky<double, 3>>(StvkWithHencky<double, 3> const&, double, double);
template void MpmParticleHandleBase<double, 3>::addJBasedMpmForce<EquationOfState<double, 3>>(EquationOfState<double, 3> const&);
template void MpmParticleHandleBase<double, 3>::addPlasticity<CorotatedIsotropic<double, 3>, SnowPlasticity<double>>(CorotatedIsotropic<double, 3> const&, SnowPlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<CorotatedElasticity<double, 3>, SnowPlasticity<double>>(CorotatedElasticity<double, 3> const&, SnowPlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<LinearCorotated<double, 3>, SnowPlasticity<double>>(LinearCorotated<double, 3> const&, SnowPlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHencky<double, 3>, ModifiedCamClay<double>>(StvkWithHencky<double, 3> const&, ModifiedCamClay<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHenckyIsotropic<double, 3>, ModifiedCamClay<double>>(StvkWithHenckyIsotropic<double, 3> const&, ModifiedCamClay<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<EquationOfState<double, 3>, UnilateralJ<double>>(EquationOfState<double, 3> const&, UnilateralJ<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<NeoHookean<double, 3>, SnowPlasticity<double>>(NeoHookean<double, 3> const&, SnowPlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<NeoHookeanBorden<double, 3>, NonAssociativeCamClay<double>>(NeoHookeanBorden<double, 3> const&, NonAssociativeCamClay<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<NeoHookeanBorden<double, 3>, NonAssociativeVonMises<double>>(NeoHookeanBorden<double, 3> const&, NonAssociativeVonMises<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<NeoHookeanBorden<double, 3>, NonAssociativeDruckerPrager<double>>(NeoHookeanBorden<double, 3> const&, NonAssociativeDruckerPrager<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHencky<double, 3>, DruckerPragerStvkHencky<double>>(StvkWithHencky<double, 3> const&, DruckerPragerStvkHencky<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHencky<double, 3>, DruckerPragerStrainSoftening<double>>(StvkWithHencky<double, 3> const&, DruckerPragerStrainSoftening<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHencky<double, 3>, VonMisesStvkHencky<double, 3>>(StvkWithHencky<double, 3> const&, VonMisesStvkHencky<double, 3> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<QRStableNeoHookean<double, 3>, VonMisesStvkHencky<double, 3>>(QRStableNeoHookean<double, 3> const&, VonMisesStvkHencky<double, 3> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHencky<double, 3>, VonMisesCapped<double>>(StvkWithHencky<double, 3> const&, VonMisesCapped<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHenckyDecoupled<double, 3>, DruckerPragerStvkHencky<double>>(StvkWithHenckyDecoupled<double, 3> const&, DruckerPragerStvkHencky<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHenckyIsotropic<double, 3>, DruckerPragerStvkHencky<double>>(StvkWithHenckyIsotropic<double, 3> const&, DruckerPragerStvkHencky<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<Smudge<double, 3>, DruckerPragerStvkHencky<double>>(Smudge<double, 3> const&, DruckerPragerStvkHencky<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<Smudge<double, 3>, SmudgePlasticity<double>>(Smudge<double, 3> const&, SmudgePlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHenckyIsotropic<double, 3>, SmudgePlasticity<double>>(StvkWithHenckyIsotropic<double, 3> const&, SmudgePlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHenckyIsotropic<double, 3>, DruckerPragerStrainSoftening<double>>(StvkWithHenckyIsotropic<double, 3> const&, DruckerPragerStrainSoftening<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHenckyIsotropic<double, 3>, VonMisesStvkHencky<double, 3>>(StvkWithHenckyIsotropic<double, 3> const&, VonMisesStvkHencky<double, 3> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHenckyIsotropic<double, 3>, VonMisesCapped<double>>(StvkWithHenckyIsotropic<double, 3> const&, VonMisesCapped<double> const&, std::string);
template void MpmParticleHandleBase<double, 3>::addPlasticity<StvkWithHenckyIsotropicUnilateral<double, 3>, DruckerPragerStvkHencky<double>>(StvkWithHenckyIsotropicUnilateral<double, 3> const&, DruckerPragerStvkHencky<double> const&, std::string);
} // namespace ZIRAN

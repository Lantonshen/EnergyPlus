// EnergyPlus, Copyright (c) 1996-2020, The Board of Trustees of the University of Illinois,
// The Regents of the University of California, through Lawrence Berkeley National Laboratory
// (subject to receipt of any required approvals from the U.S. Dept. of Energy), Oak Ridge
// National Laboratory, managed by UT-Battelle, Alliance for Sustainable Energy, LLC, and other
// contributors. All rights reserved.
//
// NOTICE: This Software was developed under funding from the U.S. Department of Energy and the
// U.S. Government consequently retains certain rights. As such, the U.S. Government has been
// granted for itself and others acting on its behalf a paid-up, nonexclusive, irrevocable,
// worldwide license in the Software to reproduce, distribute copies to the public, prepare
// derivative works, and perform publicly and display publicly, and to permit others to do so.
//
// Redistribution and use in source and binary forms, with or without modification, are permitted
// provided that the following conditions are met:
//
// (1) Redistributions of source code must retain the above copyright notice, this list of
//     conditions and the following disclaimer.
//
// (2) Redistributions in binary form must reproduce the above copyright notice, this list of
//     conditions and the following disclaimer in the documentation and/or other materials
//     provided with the distribution.
//
// (3) Neither the name of the University of California, Lawrence Berkeley National Laboratory,
//     the University of Illinois, U.S. Dept. of Energy nor the names of its contributors may be
//     used to endorse or promote products derived from this software without specific prior
//     written permission.
//
// (4) Use of EnergyPlus(TM) Name. If Licensee (i) distributes the software in stand-alone form
//     without changes from the version obtained under this License, or (ii) Licensee makes a
//     reference solely to the software portion of its product, Licensee must refer to the
//     software as "EnergyPlus version X" software, where "X" is the version number Licensee
//     obtained under this License and may not use a different name for the software. Except as
//     specifically required in this Section (4), Licensee shall not use in a company name, a
//     product name, in advertising, publicity, or other promotional activities any name, trade
//     name, trademark, logo, or other designation of "EnergyPlus", "E+", "e+" or confusingly
//     similar designation, without the U.S. Department of Energy's prior written consent.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef EnergyPlusData_hh_INCLUDED
#define EnergyPlusData_hh_INCLUDED

// C++ Headers
#include <unordered_map>
#include <string>

// EnergyPlus Headers
#include <EnergyPlus/Data/BaseData.hh>
#include <EnergyPlus/EnergyPlus.hh>

#include <EnergyPlus/AirLoopHVACDOAS.hh>
#include <EnergyPlus/BaseboardElectric.hh>
#include <EnergyPlus/BaseboardRadiator.hh>
#include <EnergyPlus/BoilerSteam.hh>
#include <EnergyPlus/Boilers.hh>
#include <EnergyPlus/BranchInputManager.hh>
#include <EnergyPlus/ChilledCeilingPanelSimple.hh>
#include <EnergyPlus/ChillerAbsorption.hh>
#include <EnergyPlus/ChillerElectricEIR.hh>
#include <EnergyPlus/ChillerExhaustAbsorption.hh>
#include <EnergyPlus/ChillerGasAbsorption.hh>
#include <EnergyPlus/ChillerIndirectAbsorption.hh>
#include <EnergyPlus/ChillerReformulatedEIR.hh>
#include <EnergyPlus/ConvectionCoefficients.hh>
#include <EnergyPlus/CondenserLoopTowers.hh>
#include <EnergyPlus/CostEstimateManager.hh>
#include <EnergyPlus/CoolTower.hh>
#include <EnergyPlus/CTElectricGenerator.hh>
#include <EnergyPlus/CrossVentMgr.hh>
#include <EnergyPlus/ExteriorEnergyUse.hh>
#include <EnergyPlus/Fans.hh>
#include <EnergyPlus/IOFiles.hh>
#include <EnergyPlus/Pipes.hh>
#include <EnergyPlus/PlantChillers.hh>
#include <EnergyPlus/WaterUse.hh>
#include <EnergyPlus/WindowAC.hh>
#include <EnergyPlus/WindowComplexManager.hh>
#include <EnergyPlus/WindowEquivalentLayer.hh>
#include <EnergyPlus/WindowManager.hh>
#include <EnergyPlus/WindTurbine.hh>
#include <EnergyPlus/ZoneAirLoopEquipmentManager.hh>
#include <EnergyPlus/ZoneContaminantPredictorCorrector.hh>
#include <EnergyPlus/ZoneDehumidifier.hh>
#include <EnergyPlus/ZoneEquipmentManager.hh>
#include <EnergyPlus/ZonePlenum.hh>
#include <EnergyPlus/ZoneTempPredictorCorrector.hh>

#include <unordered_map>
#include <string>
#include <unordered_map>

namespace EnergyPlus {

    struct EnergyPlusData : BaseGlobalStruct {
        // module globals

        AirLoopHVACDOASData dataAirLoopHVACDOAS;
        BaseboardRadiatorData dataBaseboardRadiator;
        BaseboardElectricData dataBaseboardElectric;
        BoilersData dataBoilers;
        BoilerSteamData dataSteamBoilers;
        BranchInputManagerData dataBranchInputManager;
        ChilledCeilingPanelSimpleData dataChilledCeilingPanelSimple;
        ChillerAbsorberData dataChillerAbsorbers;
        ChillerElectricEIRData dataChillerElectricEIR;
        ChillerExhaustAbsorptionData dataChillerExhaustAbsorption;
        ChillerIndirectAbsoprtionData dataChillerIndirectAbsorption;
        ChillerGasAbsorptionData dataChillerGasAbsorption;
        ChillerReformulatedEIRData dataChillerReformulatedEIR;
        ConvectionCoefficientsData dataConvectionCoefficients;
        CondenserLoopTowersData dataCondenserLoopTowers;
        CostEstimateManagerData dataCostEstimateManager;
        CoolTowerData dataCoolTower;
        CTElectricGeneratorData dataCTElectricGenerator;
        CrossVentMgrData dataCrossVentMgr;
        DataGlobal dataGlobals;
        ExteriorEnergyUseData exteriorEnergyUse;
        FansData fans;
        PipesData pipes;

        PlantChillersData dataPlantChillers;
        //OutputReportTabular outputReportTabular;

        IOFiles files;

        WaterUseData dataWaterUse;
        WindowACData dataWindowAC;
        WindowComplexManagerData dataWindowComplexManager;
        WindowEquivalentLayerData dataWindowEquivalentLayer;
        WindowManagerData dataWindowManager;
        WindTurbineData dataWindTurbine;
        ZoneAirLoopEquipmentManagerData dataZoneAirLoopEquipmentManager;
        ZoneContaminantPredictorCorrectorData dataZoneContaminantPredictorCorrector;
        ZoneDehumidifierData dataZoneDehumidifier;
        ZoneEquipmentManagerData dataZoneEquipmentManager;
        ZonePlenumData dataZonePlenum;
        ZoneTempPredictorCorrectorData dataZoneTempPredictorCorrector;

        EnergyPlusData() {
            // todo, try to eliminate the need for the singleton
            IOFiles::setSingleton(&files);
        }


        // Cannot safely copy or delete this until we eradicate all remaining
        // calls to IOFiles::getSingleton and IOFiles::setSingleton
        EnergyPlusData(const EnergyPlusData &) = delete;
        EnergyPlusData(EnergyPlusData &&) = delete;

        // all clear states
        void clear_state() override {
            dataAirLoopHVACDOAS.clear_state();
            dataBaseboardElectric.clear_state();
            dataBaseboardRadiator.clear_state();
            dataBoilers.clear_state();
            dataBranchInputManager.clear_state();
            dataSteamBoilers.clear_state();
            dataChilledCeilingPanelSimple.clear_state();
            dataChillerAbsorbers.clear_state();
            dataChillerElectricEIR.clear_state();
            dataChillerExhaustAbsorption.clear_state();
            dataChillerGasAbsorption.clear_state();
            dataChillerIndirectAbsorption.clear_state();
            dataChillerReformulatedEIR.clear_state();
            dataConvectionCoefficients.clear_state();
            dataCondenserLoopTowers.clear_state();
            dataCostEstimateManager.clear_state();
            dataCoolTower.clear_state();
            dataCTElectricGenerator.clear_state();
            dataCrossVentMgr.clear_state();
            dataGlobals.clear_state();
            exteriorEnergyUse.clear_state();
            fans.clear_state();
            //outputReportTabular.clear_state();
            pipes.clear_state();
            dataPlantChillers.clear_state();
            dataWaterUse.clear_state();
            dataWindowAC.clear_state();
            dataWindowComplexManager.clear_state();
            dataWindowEquivalentLayer.clear_state();
            dataWindowManager.clear_state();
            dataWindTurbine.clear_state();
            dataZoneAirLoopEquipmentManager.clear_state();
            dataZoneContaminantPredictorCorrector.clear_state();
            dataZoneDehumidifier.clear_state();
            dataZoneEquipmentManager.clear_state();
            dataZonePlenum.clear_state();
            dataZoneTempPredictorCorrector.clear_state();
        };
    };

}
#endif

#pragma once

#include <algorithm>

#include "base/vector.h"
#include "tools/Random.h"
#include "tools/random_utils.h"

#include "fitness.h"

double doTournament(
  const emp::vector<double>& population,
  emp::Random& rand,
  const size_t tournament_size = 7
) {

	emp::vector<size_t> choices = emp::Choose(
		rand,
		population.size(),
		tournament_size
	);

  emp::vector<double> selected;
	for (const size_t& x: choices) {
		selected.push_back(population[x]);
	}

	const double winner = *std::max_element(
		std::begin(selected),
		std::end(selected),
		[](const double& a, const double& b) {
			return calcFitness(a) < calcFitness(b);
		}
	);

	return winner;
}
